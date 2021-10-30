#include<stdio.h>
#include<stdlib.h>
int main() { 
    struct forest { 
        int trees; int animals; 
        }F1,*F2; 
        F1.trees=1000; F1.animals=20; 
        F2=&F1; 
        printf("%d ",F2.animals); 
        return 0; 
}
