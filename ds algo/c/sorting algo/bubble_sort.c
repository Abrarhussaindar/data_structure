#include<stdio.h>
#define N 5
void main(){
    int arr[N],temp;
    printf("enter the 5 elements of the array in the random order\n");
    for(int k=0; k<N; k++){
        scanf("%d",&arr[k]);
    }
    printf("The unsorted elements of the given array are: \n");
    for(int l=0; l<N; l++){
        printf("%d\t",arr[l]);
    }
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-1-i; j++){
            if(arr[j]>arr[j+1]){
4
            }
        }
    }
    printf("\nThe sorted elements of the array are: \n");
    for(int m=0; m<N; m++){
        printf("%d\t",arr[m]);
    }
}