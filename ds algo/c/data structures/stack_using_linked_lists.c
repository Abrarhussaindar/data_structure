#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 5

struct node{
    int data;
    struct node *link;
};
struct node *head_pointer = NULL;

int menu();
struct node *create_new_node();
void push();
int pop();
void display_all_the_node_of_the_list();

int main(){
    while(1){
        switch (menu()){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display_all_the_node_of_the_list();
            break;
        case 4:
            exit(0);
            break;       
        default:
            printf("\nEnter the valid choice: \n");
            break;
        }
    }
}
int menu(){
    int choice;

    printf("\n1: Insert the element into the stack\n2: Delete the last element from the stack\n");
    printf("3: display all the elements\n 4: Exit\n");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);

    return choice;
}
struct node *create_new_node(){
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node)); 
    return (ptr);
}
void push(){
    struct node *temp;
    int item,count=0;
    while(count<STACK_SIZE){
        temp = create_new_node();
        printf("\nEnter the element of the stack which is to be add: \n");
        scanf("%d",&item);
        temp->data = item;
        temp->link = NULL;
        count++;
        if(head_pointer == NULL){
            head_pointer = temp;
        }else{
            temp->link = head_pointer;
            head_pointer = temp;
        }
    }
}
void display_all_the_node_of_the_list(){
    struct node *temp = head_pointer;
    if(head_pointer == NULL){
        printf("\nThe List is Empty\n");
    }else{
        printf("\nThe Elements of the list are: \n");
        while(temp != NULL){
            printf("%d\t",temp->data);
            temp = temp->link;
        }
    }
}
int pop(){
    struct node *temp = head_pointer;
    printf("\nThe poped element is: %d\t",temp->data);
    printf("\n");
    head_pointer = temp->link;
    printf("Next element is: %d\t",head_pointer->data);
    return 0;
}