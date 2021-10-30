#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *head_pointer = NULL;

int menu();

struct node *create_a_node();

void insert_node_at_begining_of_the_list();
void insert_node_at_end_of_of_the_list();
void insert_node_at_after_a_particular_location();

void delete_node_at_begining_of_the_list();
void delete_node_at_end_of_of_the_list();
void delete_node_at_a_particular_location();

void display_all_the_node_of_the_list();

void reverse_all_the_elements_the_list();

int length_of_the_list();


void main(){
    for(;;){
        switch(menu()){
            case 1: 
                insert_node_at_begining_of_the_list();
                break;
            case 2:
                insert_node_at_end_of_of_the_list();
                break;
            case 3:
                insert_node_at_after_a_particular_location();
                break;
            case 4:
                delete_node_at_begining_of_the_list();
                break;
            case 5:
                delete_node_at_end_of_of_the_list();
                break;
            case 6:
                delete_node_at_a_particular_location();
                break;
            case 7:
                display_all_the_node_of_the_list();
                break;
            case 8:
                reverse_all_the_elements_the_list();
                break;

            case 10:
                length_of_the_list();
                break;
            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
}
struct node *create_a_node(){
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    return (ptr);
}
void insert_node_at_begining_of_the_list(){
    struct node *temp;
    temp = create_a_node();
    printf("\nEnter the element of the list which you want to insert at begining of the list\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(head_pointer == NULL){
        head_pointer = temp;
    }else{
        temp->link = head_pointer;
        head_pointer = temp;
    }
}
void insert_node_at_end_of_of_the_list(){
    struct node *temp, *next = head_pointer;
    int item;
    temp = create_a_node();
    printf("\nEnter the element of the list which you want to insert at end of the list\n");
    scanf("%d",&item);
    temp->data = item;
    temp->link = NULL;
    if(head_pointer == NULL){
        head_pointer = temp;
    }else{

        while(next->link != NULL){
            next = next->link;
        }
        next->link = temp;
    }
}

void insert_node_at_after_a_particular_location(){
    struct node *temp, *another_temp = head_pointer;
    temp = (struct node*)malloc(sizeof(struct node));
    int loc,i=1;
    printf("\nEnter the location after which you want to insert a node\n");
    scanf("%d",&loc);
    if(loc > length_of_the_list()){
        printf("\nLength out of range\n");
        printf("\nThe current length of the list is: %d\n",length_of_the_list());
    }else{
        while(i<loc){
            another_temp = another_temp->link;
            i++;
        }
        printf("\nEnter the element of the list which you want to insert after %d postion the list\n",loc);
        scanf("%d",&temp->data);
        temp->link = NULL;
        temp->link = another_temp->link;
        another_temp->link = temp;
    }
}

void delete_node_at_begining_of_the_list(){
    struct node *temp = head_pointer;
    head_pointer = temp->link;
    temp->link = NULL;
    free(temp);
}
void delete_node_at_end_of_of_the_list(){
    struct node *temp = head_pointer, *another_temp;
    int i=1;

    while(i < length_of_the_list()-1){
        temp = temp->link;
        i++;
    }
    another_temp = temp->link;
    temp->link = another_temp->link;
    free(another_temp);
}
void delete_node_at_a_particular_location(){
    struct node *temp = head_pointer;
    int loc,i=1;
    printf("\nEnter the location after which you want to insert a node\n");
    scanf("%d",&loc);
    if(loc > length_of_the_list()){
        printf("\nInvalid location\n");
        printf("\nThe current length of the list is: %d\n",length_of_the_list());
    }else if(loc == 1){
        head_pointer = temp->link;
        temp->link = NULL;
        free(temp);
    }else{
        struct node *p = head_pointer, *q;
        while(i < loc-1){
            p = p->link;
            i++;
        }
        q = p->link;
        p->link = q->link;
        q->link = NULL;
        free(q);
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
void reverse_all_the_elements_the_list(){
    struct node *temp = head_pointer,*another_temp = head_pointer;
    int i=0,j=length_of_the_list()-1,p;

    while(i<j){
        int k=0;
        while(k<j){
            another_temp = another_temp->link;
            k++;
        }
        p = temp->data;
        temp->data = another_temp->data; 
        another_temp->data = p;

        i++;
        j--;
        temp = temp->link;
        another_temp = head_pointer;
    }
}

int length_of_the_list(){
    struct node *temp;
    int count=0;

    temp = head_pointer;
    while(temp != NULL){
        count++;
        temp = temp->link;
    }
    printf("\nThe length of the list is: %d\n",count);
    return count;
}
int menu(){
    int choice;
    printf("\n1: Insert_node_at_begining_of_the_list\n");
    printf("\n2: Insert_node_at_end_of_of_the_list\n");
    printf("\n3: Insert_node_at_after_a_particular_location\n");
    printf("\n4: Delete_node_at_begining_of_the_list\n");
    printf("\n5: Delete_node_at_end_of_of_the_list\n");
    printf("\n6: Delete_node_at_a_particular_location\n");
    printf("\n7: Display_all_the_node_of_the_list\n");
    printf("\n8: Reverse_all_the_elements_the_list\n");
    printf("\n9: Compare_list\n");
    printf("\n10: Length_of_the_list\n");
    printf("\n10: Exit\n");

    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    return choice;
}