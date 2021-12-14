#include<stdio.h>
int t1=0,t2=1,t3;

int fibo(int t1, int t2, int n){
    
    
    if(n==0){
        return t1;
    }else{
        for(int i=2;i<=n;i++){
            t3 = t1 + t2;
            t1++;
            t2++;
            printf("%d\n",t3);
            // return fibo(t1, t2, n);
        }
    }
}

void main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("%d\n",fibo(t1, t2, n));
}