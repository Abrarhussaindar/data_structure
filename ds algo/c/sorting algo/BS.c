#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 10

int sortedArray(int arr[]);
int mid(int arr[],int start,int end);
void binarySreach(int arr[],int md);
int length(int arr[],int size);

void main(){
    int arr[CAPACITY];
    printf("Enter the %d array elements\n",CAPACITY);
    for(int i=0; i<CAPACITY; i++){
        scanf("%d",&arr[i]);
    }
    sortedArray(arr);
    int start=0,end = length(arr,CAPACITY-1),md;
    md = mid(arr,start,end);
    binarySreach(arr,md);
}
int srotedArray(int arr[]){
    for(int i=0; i<CAPACITY-1; i++){
        for(int j=0; j<CAPACITY-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    // return arr;
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
    mid_point = (start + end)%2;
    return mid_point;
}
void binarySreach(int arr[],int md){
    // int start=0,end = length(arr,CAPACITY-1),md;
    // md = mid(arr,start,end); 
    int data;
    printf("enter the element which you want to search in the array\n");
    scanf("%d",&data);
    if(arr[md] > data){
        int start=0;
        int end = md-1;
        int res;
        res = mid(arr,start,end);
        binarySreach(arr,res);
    }else if(arr[md] == data){
        printf("Data is found at index: %d\t\n",md);
    }else if(arr[md] < data){
        int start = md + 1;
        int end = CAPACITY-1;
        int rsult;
        rsult = mid(arr,start,end);
        binarySreach(arr,rsult);
    }else{
        printf("\nEnterd Element not found\n");
    }
}