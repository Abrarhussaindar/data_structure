#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 5

int queue[CAPACITY];
int front=0,rear=0;

void insert(){
    if(CAPACITY == rear){
        printf("\nQueue is Full\n");
    }else{
        int ele;
        printf("\nEnter the element you want to insert in the Queue: \n");
        scanf("%d",&ele);

        queue[rear] = ele;
        rear++;
    }
}

void display(){
    if(front == rear){
        printf("\nQueue is Empty\n");
    }else{
        printf("\nQueue elements are:\n");
        for(int i=front; i<rear; i++){
            printf("%d\t",queue[i]);
        }
    }
}

void delete(){
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

int menu(){
    int choice;
    printf("\n1: Insert the Element into the Queue\n");
    printf("\n2: Display Element of the Queue\n");
    printf("\n3: Delete a Element from the queue\n");
    printf("\n4: Exit\n");

    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    return choice;
}

void main(){
    while(1){
        switch (menu()){
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete();
            break;  
        case 4:
            exit(0);
            break;     
        default:
            break;
        }
    }
    
}




LIST insert_at_rear_(LIST last,int cost)
    LIST temp;
    temp = create();
    temp->item = cost;
    if(last == NULL){
        temp->next = temp;
        last = temp;
        return last;
    }temp->next = last->next;
    last->next = temp;
    return last;
}z