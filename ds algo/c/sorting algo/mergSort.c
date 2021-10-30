#include <stdio.h>
#define CAPACITY 10

int array_a[CAPACITY];
int array_b[CAPACITY];

void merge_array(int arr[], int lb, int mid, int ub)
{
    printf("in ma lb: %d\n",lb);
    printf("ub: %d\n",ub);
    printf("in ma mid: %d\n",mid);
    int i = lb,k=lb, j = mid + 1;
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            array_b[k] = arr[i];
            printf("array_b: %d at i: %d\n", array_b[k],i);
            i++;
            // printf("before incre k is %d\n", k);
            k++;
            // printf("after incre k is %d\n", k);

            
        }
        else
        {
            array_b[k] = arr[j];
            printf("array_b: %d\n", array_b[k]);
            j++; 
            // printf("before incre k is %d\n", k);
            k++;
            // printf("after incre k is %d\n", k);
        }
    }
    if(i > mid)
    {
        while (j <= ub)
        {
            array_b[k] = arr[j];
            j++; 
            // printf("before incre k is %d\n", k);
            k++;
            // printf("after incre k is %d\n", k);
        }
    }
    else
    {
        while (i <= mid)
        {
            array_b[k] = arr[i];
            i++; 
            // printf("before incre k is %d\n", k);
            k++;
            // printf("after incre k is %d\n", k);
        }
    }
    
    for (int p = 0; p < CAPACITY; p++)
    {
        array_a[lb++] = array_b[p];
    }
    for (int l = 0; l < CAPACITY; l++)
    {
        printf("%d\t", array_b[l]);
    }

}

void divide_array(int arr[], int lb, int ub)
{
    printf("in da lb: %d\n",lb);
    printf("ub: %d\n",ub); 
    
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        divide_array(arr, lb, mid);
        divide_array(arr, mid + 1, ub);
        printf("in da mid: %d\n",mid);
        merge_array(arr, lb, mid, ub);
    }
    
}
void main()
{
    int start = 0, end = CAPACITY;
    printf("enter the elements of the array_a: \n");
    for (int i = 0; i < CAPACITY; i++)
    {
        scanf("%d", &array_a[i]);
    }

    divide_array(array_a, start, end);
            

}