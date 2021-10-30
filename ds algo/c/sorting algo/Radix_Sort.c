#include<stdio.h>
#define CAPACITY 10

int array_a[CAPACITY];
int array_b[CAPACITY];
void print(int arry[]){
    for(int p=0;p<CAPACITY;p++){
        printf("%d\t",arry[p]);
    }
}
void counting_sort(int arra[],int pas){
    int count[CAPACITY];
    for(int i=0 ; i<CAPACITY; i++) {
        count[i] = 0;
    }
    for(int i=0; i<CAPACITY; i++) {
        ++count[((arra[i])/pas)%10];
    }
    for(int m=1;m<=CAPACITY;m++){
        count[m] += count[m-1];
    }
    for(int n=CAPACITY-1;n>=0;n--){
        array_b[--count[((arra[n]/pas)%10)]] = arra[n];
    }
    for(int j=0;j<CAPACITY;j++){
        arra[j] = array_b[j];
    }
    print(arra);
}
void radix_sort(int arr[],int max){
    for(int pas=1;(max/pas)>0;pas*10){
        counting_sort(arr,pas);
    }
}

void main(){
    printf("enter the elements of the array_a: \n");
    for(int i=0;i<CAPACITY;i++){
        scanf("%d",&array_a);
    }int k;
    printf("enter the max no. of the given array: \n");
    scanf("%d",&k);
    radix_sort(array_a,k);
}