#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 10


int array_a[CAPACITY];
int array_b[CAPACITY];

void counting_sort(int arr[],int K) {
    int count[K+1];
    for(int i=0 ; i<=K; i++) {
        count[i] = 0;
    }
    for(int i=0; i<CAPACITY; i++) {
        count[arr[i]]++;
    }
    for(int m=1;m<=K;m++){
        count[m] += count[m-1];
    }
    for(int n=CAPACITY-1;n>=0;n--){
        array_b[--count[arr[n]]] = arr[n];
    }
        for(int j=0;j<CAPACITY;j++){
        array_a[j] = array_b[j];
    }
    for(int p=0;p<CAPACITY;p++){
        printf("%d\t",array_a[p]);
    }
}
void main(){
    
    printf("enter the elements of the array_a: \n");
    for(int i=0;i<CAPACITY;i++){
        scanf("%d",&array_a[i]);
    }int k;
    printf("enter the max no. of the given array: \n");
    scanf("%d",&k);
    counting_sort(array_a,k);
}