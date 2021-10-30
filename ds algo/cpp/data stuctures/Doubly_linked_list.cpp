#include<iostream>
using namespace std;

class Node{

    public:
        Node* left_link;
        int data;
        Node* right_link;
        Node(){
            right_link = NULL;
            data = 0;
            left_link = NULL;
        }
};
class DoublyLinkedList{
    public:
        Node *head_pointer;

        DoublyLinkedList(){
            head_pointer = NULL;
        }
        DoublyLinkedList(Node *n){
            head_pointer = n;
        }
        Node *create_a_node(){
            Node *ptr;
            ptr = new Node();
            return (ptr);
        }
        void insert_node_at_begining_of_the_list(){
            Node *temp = head_pointer;
            temp = create_a_node();
            cout<<"Enter the Element of the list which you want to insert: \n"<<endl;
            cin>>temp->data;
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
            Node *temp,*forward = head_pointer;
            int item;
            temp = create_a_node();
            cout<<"Enter the Element of the list which you want to insert: \n"<<endl;
            cin>>item;
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
            Node *temp,*forward=head_pointer;
            int loc,i=1;
            cout<<"Enter the loc after which you want to insert a node: \n"<<endl;
            cin>>loc;
            if(loc > length_of_the_list()){
                cout<<"\nInvalid location\n"<<endl;
                cout<<"The current length of the list is: "<<length_of_the_list()<<endl;
            }else{
                temp = create_a_node();
                cout<<"Enter the Element of the list which you want to insert: \n"<<endl;
                cin>>temp->data;
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

        }
        void delete_node_at_end_of_of_the_list(){

        }
        void delete_node_at_a_particular_location(){

        }
        void display_all_the_node_of_the_list(){
            Node *forward = head_pointer;
            if(head_pointer == NULL){
                cout<<"\nThe list is Epmty\n"<<endl;
            }else{
                cout<<"The elements in the list are: \n"<<endl;
                while(forward != NULL){
                    cout<<forward->data<<endl;
                    forward = forward->right_link;
                }
            }
        }
        int length_of_the_list(){
            Node *temp = head_pointer;
            if(head_pointer == NULL){
                cout<<"\nThe list is Empty\n"<<endl;
            }else{
                int count=0;
                while(temp != NULL){
                    count++;
                    temp = temp->right_link;
                }
                cout<<"\nThe length of the list is: "<<count<<endl;
                return count;
            }
        }
};
int menu(){
    int choice;
    cout<<"\n1: Insert_node_at_begining_of_the_list\n"<<endl;
    cout<<"\n2: Insert_node_at_end_of_of_the_list\n"<<endl;
    cout<<"\n3: Insert_node_at_after_a_particular_location\n"<<endl;
    cout<<"\n4: Delete_node_at_begining_of_the_list\n"<<endl;
    cout<<"\n5: Delete_node_at_end_of_of_the_list\n"<<endl;
    cout<<"\n6: Delete_node_at_a_particular_location\n"<<endl;
    cout<<"\n7: Display_all_the_node_of_the_list\n"<<endl;
    cout<<"\n8: Length_of_the_list\n"<<endl;
    cout<<"\n8: Exit\n"<<endl;

    cout<<"\nEnter your choice:\n"<<endl;
    cin>>choice;
    return choice;
}
int main(){
    DoublyLinkedList d1;
    while(1){
        switch (menu()){
            case 1:
                d1.insert_node_at_begining_of_the_list();
                break;
            case 2:
                d1.insert_node_at_end_of_of_the_list();
                break;
            case 3:
                d1.insert_node_at_after_a_particular_location();
                break;
            case 4:
                d1.delete_node_at_begining_of_the_list();
                break;
            case 5:
                d1.delete_node_at_end_of_of_the_list();
                break;
            case 6:
                d1.delete_node_at_a_particular_location();
                break;
            case 7:
                d1.display_all_the_node_of_the_list();
                break;
            case 8:
                d1.length_of_the_list();
                break;
            default:
                cout<<"\nInvalid choice\n"<<endl;
                break;
        }
    }
    return 0;
}