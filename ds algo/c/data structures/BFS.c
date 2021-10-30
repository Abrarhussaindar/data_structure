#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 5

// node formation
struct node{
    struct node *left_child_link;
    int data;
    struct node *right_child_link;
};
struct node *head_pointer = NULL;

// queue formation
int queue[CAPACITY];
int front=0,rear=0;

void Enqueue(int ele);
void Dequeue();

void main(){

}

void Enqueue(int ele){
    if(CAPACITY == rear){
        printf("\nQueue is Full\n");
    }else{
        // int ele;
        // printf("\nEnter the element you want to insert in the Queue: \n");
        // scanf("%d",&ele);
        queue[rear] = ele;
        rear++;
    }
}

void Dequeue(){
    if(front == rear){
        printf("\nQueue is Empty\n");
    }else{
        printf("Deleted element is: %d\n",queue[front]);
        for(int i=front; i<rear-1; i++){
            queue[i] = queue[i+1];
        }
        rear--;
    }
}