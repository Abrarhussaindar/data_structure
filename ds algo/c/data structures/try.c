#include<stdio.h>
#include<stdlib.h>

struct node{
    char name[20];
    char id[12];
    char branch[3];
    struct node *link;
};
struct node *head_pointer = NULL;

int menu();

struct node *create_a_node();

void insert_node_at_end_of_of_the_list();
void display_all_the_node_of_the_list();

void main(){
    while(1){
        switch(menu()){
            case 1:
                insert_node_at_end_of_of_the_list();
                break;

            case 2:
                display_all_the_node_of_the_list();
                break;

            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
}
int menu(){
    int choice;

    printf("\n1: Insert_node_at_end_of_of_the_list\n");

    printf("\n2: Display_all_the_node_of_the_list\n");

    printf("\n3: Exit\n");

    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    return choice;
}
struct node *create_a_node(){
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    return (ptr);
}

void insert_node_at_end_of_of_the_list(){
    struct node *temp, *next = head_pointer;
    char nam;
    temp = create_a_node();
    printf("\nEnter the name of the student which you want to insert at end of the list\n");
    scanf("%s",temp->name);

    temp->link = NULL;
    if(head_pointer == NULL){
        head_pointer = temp;
    }else{

        while(next->link != NULL){
            next = next->link;
        }
        next->link = temp;
        temp->link = NULL;
    }
}
void display_all_the_node_of_the_list(){
    struct node *temp = head_pointer;
    if(head_pointer == NULL){
        printf("\nThe List is Empty\n");
    }else{
        printf("\nThe Elements of the list are: \n");
        while(temp != NULL){
            printf("%s\t",temp->name);
            temp = temp->link;
        }
    }
}