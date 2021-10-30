#include<iostream>
#include<string>
#include<queue>
using namespace std;

struct node{
    struct node *left_child_link;
    int data;
    struct node *right_child_link;
};
struct node *head_pointer = NULL;

int main(){
        if(head_pointer == NULL){
        return;
    }
    queue<node*> Q;
    Q.push(head_pointer);

    while(!Q.empty()){
        node* current = Q.front();
        cout<<current->data<<" ";
        if(current->left_child_link != NULL){
            Q.push(current->left_child_link);
        }if(current->right_child_link != NULL){
            Q.push(current->right_child_link);
        }
        Q.pop();
    }
    return 0;
}

