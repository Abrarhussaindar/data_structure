#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 5

int top = -1, element;
int stack[CAPACITY];

int choice();
void push();
void display();
int pop();
int is_full();
int is_empty();
int peek();


int is_full(){
    if(top == CAPACITY -1 ){
        return 1;
    } 
    else{ 
        return 0;
    }
}

int is_empty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(){
    if(is_full()){
        printf("stack is full\n");
    }else{
        printf("\nEnter the element you want to insert \n");
        scanf("%d",&element);
        top++;
        stack[top] = element;
        printf("\nElement %d is inserted\n",element);
    }

}

void display(){
    if(is_empty()){
        printf("No element in the stack\n");
    }else{
        printf("Elements in the stack are:\n");
        for(int i=top; i>-1; i--){
            printf("%d\n",stack[i]);
        }   
    }
}

int pop(){
    int ele;
    if(is_empty()){
        printf("stack is empty\n");
    }else{
        ele = stack[top];
        printf("Deleted element is: %d\n",ele);
        top--;
    }
    return top;
}

int peek(){
    if(is_empty()){
        return 0;
    }else{
        printf("Last element in the stack is: %d\n",stack[top]);
    }
}
int choice(){
    int choice;

    printf("1: Insert the element into the stack\n2: Delete the last element from the stack\n");
    printf("3: Display all the elements in the stack\n4: Display the last element in the stack\n5: Exit\n");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    return choice;
}

void main(){
    while (1){
        switch(choice()){
            case 1: 
                push();
                break;
            case 2: 
                pop();
                break;
            case 3: 
                display();
                break;
            case 4: 
                peek();
                break;
            case 5: 
                exit(0);
                break;
            default: 
                printf("Invalid Choice\n");
                break;
            }

    }
    

}