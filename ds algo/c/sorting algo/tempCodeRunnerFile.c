for(int i=0; i<CAPACITY-1; i++){
        for(int j=0; j<CAPACITY-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }for(int m=0;m<CAPACITY;m++){
        printf("%d\t",arr[m]);
    }printf("\n");