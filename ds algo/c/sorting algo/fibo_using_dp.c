#include<stdio.h>

int fibo(int n){
    int fib_arr[n+2];  // n + 2 is for including ist(0) and 2nd(1) terms also 

    fib_arr[0] = 0;
    fib_arr[1] = 1;

    for(int i=2;i<=n;i++){
        fib_arr[i] = fib_arr[i-1] + fib_arr[i-2];
    }

    return fib_arr[n];

}

void main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("%d\n",fibo(n));
}