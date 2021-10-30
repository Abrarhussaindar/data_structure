#include<stdio.h>
#define CAPACITY 10

void main(){
    int array[CAPACITY],temp;
    printf("enter the elements of the array in random order\n");
    for(int k=0;k<CAPACITY;k++){
        scanf("%d",&array[k]);
    }printf("the unsroted elements of the array are:\t");
    for(int l=0;l<CAPACITY;l++){
        printf("%d\t",array[l]);
    }
    for(int i=0;i<CAPACITY-1;i++){
        int min = i;
        for(int j=i+1;j<CAPACITY;j++){
            if(array[j]<array[min]){
                min = j;
            }
        }
        if(min != i){
            temp = array[i];
            array[i]=array[min];
            array[min]=temp;
        }
    }printf("\n");
    printf("the sorted elements of the array are:\t");
    for(int m=0;m<CAPACITY;m++){
        printf("%d\t",array[m]);
    }
}