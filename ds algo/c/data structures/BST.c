#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left_child_link;
    int data;
    struct node *right_child_link;
};
struct node *head_pointer = NULL;

int menu();
struct node *create_a_node();
void insert_a_node_in_the_bst();
void delete_a_node_in_the_bst();
void display_in_preorder_fashion(struct node *ptr);
void display_in_inorder_fashion(struct node *ptr);
void display_in_postorder_fashion(struct node *ptr);
// int length_of_the_list();

void main(){
    for(;;){
        switch(menu()){
            case 1:
                insert_a_node_in_the_bst();
                break;
            case 2:
                delete_a_node_in_the_bst();
                break;
            case 3:
                display_in_preorder_fashion(head_pointer);
                break;

            case 4:
                display_in_inorder_fashion(head_pointer);
                break;
            case 5:
                display_in_postorder_fashion(head_pointer);
                break;
            // case 4:
            //     length_of_the_list();
            //     break;
            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
}
int menu(){
    int choice;
    printf("\n1: Insert_node_at_begining_of_the_list\n");
    printf("\n2: Delete_node_at_begining_of_the_list\n");
    printf("\n3: Display_in_preorder_fashion\n");
    printf("\n4: Display_in_inorder_fashion\n");
    printf("\n5: Display_in_postorder_fashion\n");    
    printf("\n6: Length_of_the_list\n");
    printf("\n7: Exit\n");

    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    return choice;
}
struct node *create_a_node(){
    struct node *ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    return (ptr);
}
void insert_a_node_in_the_bst(){
    struct node *temp;
    int item;

    temp = create_a_node();
    printf("\nEnter the data you want to store in the node of the BST: \n");
    scanf("%d",&item);
    temp->data = item;
    temp->left_child_link = NULL;
    temp->right_child_link = NULL;

    if(head_pointer == NULL){
        head_pointer = temp;    
    }else{
        struct node *another_temp = head_pointer,*parent = head_pointer;
        while(another_temp){
            parent = another_temp;
            if(temp->data > another_temp->data){
                another_temp = another_temp->right_child_link;
            }else{
                another_temp = another_temp->left_child_link;
            }
        }
        if(temp->data > parent->data){
            parent->right_child_link = temp;
        }else{
            parent->left_child_link = temp;
        }
    }

}
void delete_a_node_in_the_bst(){
    struct node *target_node = head_pointer, *parent_node = head_pointer;
    if(head_pointer == NULL){
        printf("\nBST is Empty(no nodes present)\n");
    }else{
        while(target_node){
            if(target_node->right_child_link != NULL){
                if(target_node == parent_node->right_child_link){
                    parent_node->right_child_link = target_node->right_child_link;
                }
                target_node->right_child_link = NULL;
                free(target_node);
            }else if(target_node->left_child_link != NULL){
                if(target_node == parent_node->right_child_link){
                    parent_node->right_child_link = target_node->left_child_link;
                }
                target_node->left_child_link = NULL;
                free(target_node);
            }
        }
    }   
}
void display_in_preorder_fashion(struct node *ptr){
    if(ptr){
        printf("%d\n",ptr->data);
        display_in_preorder_fashion(ptr->left_child_link);
        display_in_preorder_fashion(ptr->right_child_link);
    }
}
void display_in_inorder_fashion(struct node *ptr){
    if(ptr){
        display_in_inorder_fashion(ptr->left_child_link);
        printf("%d\n",ptr->data);
        display_in_inorder_fashion(ptr->right_child_link);
    }
}
void display_in_postorder_fashion(struct node *ptr){
    if(ptr){
        display_in_postorder_fashion(ptr->left_child_link);
        display_in_postorder_fashion(ptr->right_child_link);
        printf("%d\n",ptr->data);
    }
}
// int length_of_the_list();