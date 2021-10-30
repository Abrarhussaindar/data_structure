#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 10

int mid(int arr[],int start,int end);
int binarySreach(int arr[],int md,int da);
int length(int arr[],int size);

void main(){
    int arr[CAPACITY];
    printf("Enter the %d array elements\n",CAPACITY);
    for(int i=0; i<CAPACITY; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<CAPACITY-1; i++){
        for(int j=0; j<CAPACITY-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }for(int m=0;m<CAPACITY;m++){
        printf("%d\t",arr[m]);
    }printf("\n");
    int start=0,end = length(arr,CAPACITY-1),md;
    md = mid(arr,start,end);
    int data;
    printf("enter the element which you want to search in the array\n");
    scanf("%d",&data);
    int item;
    item = binarySreach(arr,md,data);
    printf("the enterd element is found at position: %d\n",item);
}
int length(int arr[],int size){
    int len=0;
    for(int i=0; i<size; i++){
        arr[i];
        len++;
    }return len;
}
int mid(int arr[],int start,int end){
    int mid_point;
    mid_point = (start + end)/2;
    return mid_point;
}
int binarySreach(int arr[],int md,int da){
    if(arr[md] > da){
        
        int start=0;
        int end = md-1;
        int res;
        res = mid(arr,start,end);
        binarySreach(arr,res,da);
    }else if(arr[md] == da){
        return md;
    }else if(arr[md] < da){
        int start = md + 1;
        int end = CAPACITY-1;
        int rsult;
        rsult = mid(arr,start,end);
        binarySreach(arr,rsult,da);
    }else{
        printf("\nEnterd Element not found\n");
    }
}