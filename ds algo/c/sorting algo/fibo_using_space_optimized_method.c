#include<stdio.h>

int fibo(int n){
    int t1=0,t2=1,t3;
    
    if(n==0){
        return t1;
    }
    for(int i=2;i<=n;i++){
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
    }
    return t2;
}

void main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("%d\n",fibo(n));
}