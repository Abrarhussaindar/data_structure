#include<stdio.h>
#define CAPACITY  10

int array[CAPACITY],loc;

int quickSort(int array[],int lb,int ub);
int partioning(int array[],int lb,int ub);

void main(){
    printf("enter the elements of array in random order\n");
    for(int k=0;k<CAPACITY;k++){
        scanf("%d",&array[k]);
    }printf("the entered unsorted array\n");
    for(int l=0;l<CAPACITY;l++){
        printf("%d\t",array[l]);
    }
    printf("\n");
    int lb=0,ub=CAPACITY-1;
    quickSort(array,lb,ub);
    printf("the sorted array is: \n");
    for(int m=0;m<CAPACITY;m++){
        printf("%d\t",array[m]);
    }
}
int quickSort(int array[],int lb,int ub){
    if(lb<ub){
        int loc = partioning(array,lb,ub);
        quickSort(array,lb,loc-1);
        quickSort(array,loc+1,ub);
    }
}

int partioning(int array[],int lb,int ub){
    int pivot = array[lb];
    int start = lb;
    int end = ub;
    while(start<end){
        while(array[start]<=pivot){
            start++;
        }
        while(array[end]>pivot){
            end--;
        }
        if(start<end){
            int temp;
            temp = array[start];
            array[start] = array[end];
            array[end] = temp;
        }
    }
    int temper;
    temper = array[lb];
    array[lb] = array[end];
    array[end] = temper;
    return (end);
}