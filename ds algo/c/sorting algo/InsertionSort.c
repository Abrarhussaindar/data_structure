#include<stdio.h>
#define CAPACITY 10

void main(){
    int array[CAPACITY], temp;
    printf("enter the elements of array in random order\n");
    for(int k=0;k<CAPACITY;k++){
        scanf("%d",&array[k]);
    }printf("the entered unsorted array\n");
    for(int l=0;l<CAPACITY;l++){
        printf("%d\t",array[l]);
    }
    printf("\n");
    for(int i=1;i<CAPACITY;i++){
        temp = array[i];
        int j = i-1;
        while(j>=0 && array[j]>temp){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
    printf("the sorted array is: \t");
    for(int m=0;m<CAPACITY;m++){
        printf("%d\t",array[m]);    
    }
}