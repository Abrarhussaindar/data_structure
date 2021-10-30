#include<stdio.h>
void main()
{
    int given_array[10],index_array[5],key,count=0,k=0;

    printf("enter the array elements: \n");
    for (int i=0;i<10;i++){
        scanf("%d", &given_array[i]);
    }
    printf("enter the key to be found\n");
    scanf("%d",&key);

    for(int j=0;j<10;j++){
        if(given_array[j] == key){
            count++;
            index_array[k] = j;
            k++;
        }
    }

    printf("the key element is present %d times\n",count);
    for(int l=0;l<k;l++){
        printf("key index: %d\n",index_array[l]+1);
    }
}