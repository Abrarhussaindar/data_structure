#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left_link;
    int data;
    struct node *right_link;
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

struct node *create_a_node(){
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    return (ptr);
}
void insert_node_at_begining_of_the_list(){
    struct node *temp = head_pointer;
    temp = create_a_node();
    printf("Enter the Element of the list which you want to insert: \n");
    scanf("%d",&temp->data);
    temp->left_link = NULL;
    temp->right_link = NULL;
    if(head_pointer == NULL){
        head_pointer = temp;
    }else{
        temp->right_link = head_pointer;
        head_pointer->left_link = temp;
        head_pointer = temp;
    }

}
void insert_node_at_end_of_of_the_list(){
    struct node *temp,*forward = head_pointer;
    int item;
    temp = create_a_node();
    printf("Enter the Element of the list which you want to insert: \n");
    scanf("%d",&item);
    temp->left_link = NULL;
    temp->data = item;    
    temp->right_link = NULL;
    if(head_pointer == NULL){
        head_pointer = temp;
    }else{
        while(forward->right_link != NULL){
            forward = forward->right_link;
        }
        forward->right_link = temp;
        temp->left_link = forward;
    }
}

void insert_node_at_after_a_particular_location(){
    struct node *temp,*forward=head_pointer;
    int loc,i=1;
    printf("Enter the loc after which you want to insert a node: \n");
    scanf("%d",&loc);
    if(loc > length_of_the_list()){
        printf("\nInvalid location\n");
        printf("The current length of the list is: %d\n",length_of_the_list());
    }else{
        temp = create_a_node();
        printf("Enter the Element of the list which you want to insert: \n");
        scanf("%d",&temp->data);
        temp->left_link = NULL;
        temp->right_link = NULL;
        while(i<loc){
            forward = forward->right_link;
            i++;
        }
        temp->right_link = forward->right_link;
        forward->right_link->left_link = temp;
        temp->left_link = forward;
        forward->right_link = temp;
    }
}
void delete_node_at_begining_of_the_list(){
    struct node *temp = head_pointer;
    head_pointer = temp->right_link;
    temp->right_link = NULL;
    free(temp);
}
void delete_node_at_end_of_of_the_list(){
    struct node *temp = head_pointer, *another_temp;
    int i=1;

    while(i < length_of_the_list()-1){
        temp = temp->right_link;
        i++;
    }
    another_temp = temp->right_link;
    temp->right_link = another_temp->right_link;
    another_temp->left_link = NULL;                                                                                                                                             
    free(another_temp);
}
void delete_node_at_a_particular_location(){
    struct node *temp = head_pointer;
    int loc=1;
    printf("\nEnter the location after which you want to insert a node\n");
    scanf("%d",&loc);
    if(loc > length_of_the_list()){
        printf("\nInvalid location\n");
        printf("\nThe current length of the list is: %d\n",length_of_the_list());
    }else if(loc == 1){
        head_pointer = temp->right_link;
        temp->right_link = NULL;
        free(temp);
    }else{
        int i=1;
        struct node *p_temp = head_pointer, *q_temp;
        while(i < loc-1){
            p_temp = p_temp->right_link;
            i++;
        }
        q_temp = p_temp->right_link;
        p_temp->right_link = q_temp->right_link;
        q_temp->right_link->left_link = q_temp->left_link;
        q_temp->right_link = NULL;
        q_temp->left_link = NULL;
        free(q_temp);
    }
}
void display_all_the_node_of_the_list(){
    struct node *forward = head_pointer;
    if(head_pointer == NULL){
        printf("\nThe list is Epmty\n");
    }else{
        printf("The elements in the list are: \n");
        while(forward != NULL){
            printf("%d\t",forward->data);
            forward = forward->right_link;
        }
    }
}
int length_of_the_list(){
    struct node *temp = head_pointer;
    if(head_pointer == NULL){
        printf("\nThe list is Empty\n");
    }else{
        int count=0;
        while(temp != NULL){
            count++;
            temp = temp->right_link;
        }
        printf("\nThe length of the list is: %d\n",count);
        return count;
    }
}
void reverse_all_the_elements_the_list(){
    struct node *temp = head_pointer,*another_temp = head_pointer;
    int i=0,j=length_of_the_list()-1,p;

    while(i<j){
        int k=0;
        while(k<j){
            another_temp = another_temp->left_link;
            k++;
        }
        p = temp->data;
        temp->data = another_temp->data; 
        another_temp->data = p;

        i++;
        j--;
        temp = temp->left_link;
        another_temp = head_pointer;
    }
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
    printf("\n9: Length_of_the_list\n");
    printf("\n10: Exit\n");

    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    return choice;
}
void main(){
    while(1){
        switch (menu()){
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
            case 9:
                length_of_the_list();
                break;
            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
}