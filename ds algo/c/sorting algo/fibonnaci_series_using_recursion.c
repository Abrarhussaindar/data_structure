#include<stdio.h>

int fibo(int n){
    if(n<=1){
        return n;
    }else{
        // printf("%d\n",(fibo(n-1)+fibo(n-2)));
        return (fibo(n-1) + fibo(n-2));
    }
}

void main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("%d\n",fibo(n));
}