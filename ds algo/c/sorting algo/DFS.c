#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left_child_link;
    int data;
    struct node *right_child_link;
};
struct node *head_pointer = NULL;

void display_in_preorder_fashion(struct node *ptr);
void display_in_inorder_fashion(struct node *ptr);
void display_in_postorder_fashion(struct node *ptr);

void main(){

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