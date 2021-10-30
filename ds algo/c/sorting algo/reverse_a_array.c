#include<stdio.h>
#define N 5

void main(){
    int arr[N],temp;
    printf("Enter the elements of the array in any fashion\n");
    for(int k=0; k<N; k++){
        scanf("%d",&arr[k]);
    }
    printf("\nThe elements of the array are: \n");
    for(int l=0; l<N; l++){
        printf("%d\t",arr[l]);
    }
    int i=0,j=N-1;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("\nThe reversed elements of the array are: \n");
    for(int m=0; m<N; m++){
        printf("%d\t",arr[m]);
    }
}