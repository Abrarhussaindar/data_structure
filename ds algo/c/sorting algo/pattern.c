#include<stdio.h>

void main(){
    int n=200;
    // scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}