#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* link;
        Node(){
            data = 0;
            link = NULL;
        }
};
class SinglyLinkedList{
    public:
        Node* head_pointer;

        SinglyLinkedList(){
            head_pointer = NULL;
        }
        SinglyLinkedList(Node *n){
            head_pointer = n;
        }
        Node *create_a_node(){
            Node *ptr;
            ptr = new Node();
            return (ptr);
        }
        void insert_node_at_begining_of_the_list(){
            Node *temp;
            int element;
            temp = create_a_node();
            cout<<endl<<"Enter the element of the list which you want to insert at begining of the list"<<endl;
            cin>>temp->data;
            temp->link = NULL;
            if(head_pointer == NULL){
                head_pointer = temp;
            }else{
                temp->link = head_pointer;
                head_pointer = temp;
            }
        }
        void insert_node_at_end_of_of_the_list(){
            Node *temp, *next = head_pointer;
            int item;
            temp = create_a_node();
            cout<<endl<<"Enter the element of the list which you want to insert at end of the list"<<endl;
            cin>>item;
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
            Node *temp, *another_temp = head_pointer;
            temp = create_a_node();
            int loc,i=1;
            cout<<endl<<"Enter the location after which you want to insert a node"<<endl;
            cin>>loc;
            if(loc > length_of_the_list()){
                cout<<endl<<"Length out of range"<<endl;
                cout<<"The current length of the list is: "<<length_of_the_list()<<endl;
            }else{
                while(i<loc){
                    another_temp = another_temp->link;
                    i++;
                }
                cout<<"Enter the element of the list which you want to insert after "<<loc<<"postion the list\n"<<endl;
                cin>>temp->data;
                temp->link = NULL;
                temp->link = another_temp->link;
                another_temp->link = temp;
            }
        }

        void delete_node_at_begining_of_the_list(){
            Node *temp = head_pointer;
            head_pointer = temp->link;
            temp->link = NULL;
            free(temp);
        }
        void delete_node_at_end_of_of_the_list(){
            Node *temp = head_pointer, *another_temp;
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
            Node *temp = head_pointer;
            int loc=1;
            cout<<endl<<"Enter the location after which you want to insert a node"<<endl;
            cin>>loc;
            if(loc > length_of_the_list()){
                cout<<endl<<"Invalid location"<<endl;
                cout<<"The current length of the list is: "<<length_of_the_list()<<endl;
            }else if(loc == 1){
                head_pointer = temp->link;
                temp->link = NULL;
                free(temp);
            }else{
                int i=1;
                Node *p = head_pointer, *q;
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
            Node *temp = head_pointer;
            if(head_pointer == NULL){
                cout<<endl<<"The List is Empty"<<endl;
            }else{
                cout<<endl<<"The Elements of the list are: "<<endl;
                while(temp != NULL){
                    cout<<temp->data<<endl;
                    temp = temp->link;
                }
            }
        }
        void reverse_all_the_elements_the_list(){
            Node *temp = head_pointer,*another_temp = head_pointer;
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
            Node *temp;
            int count=0;
            temp = head_pointer;
            while(temp != NULL){
                count++;
                temp = temp->link;
            }
            cout<<"The length of the list is: "<<count<<endl;
            return count;
        }
};
int menu(){
    int choice;
    cout<<endl<<"1: Insert_node_at_begining_of_the_list"<<endl;
    cout<<endl<<"2: Insert_node_at_end_of_of_the_list"<<endl;
    cout<<endl<<"3: Insert_node_at_after_a_particular_location"<<endl;
    cout<<endl<<"4: Delete_node_at_begining_of_the_list"<<endl;
    cout<<endl<<"5: Delete_node_at_end_of_of_the_list"<<endl;
    cout<<endl<<"6: Delete_node_at_a_particular_location"<<endl;
    cout<<endl<<"7: Display_all_the_node_of_the_list"<<endl;
    cout<<endl<<"8: Reverse_all_the_elements_the_list"<<endl;
    cout<<endl<<"9: Length_of_the_list"<<endl;
    cout<<endl<<"10: Exit"<<endl;

    cout<<endl<<"Enter your choice:"<<endl;
    cin>>choice;
    return choice;
}
int main(){
    SinglyLinkedList s1;
    while(1){
        switch(menu()){
            case 1:
                s1.insert_node_at_begining_of_the_list();
                break;
            case 2:
                s1.insert_node_at_end_of_of_the_list();
                break;
            case 3:
                s1.insert_node_at_after_a_particular_location();
                break;
            case 4:
                s1.delete_node_at_begining_of_the_list();
                break;
            case 5:
                s1.delete_node_at_end_of_of_the_list();
                break;
            case 6:
                s1.delete_node_at_a_particular_location();
                break;
            case 7:
                s1.display_all_the_node_of_the_list();
                break;
            case 8:
                s1.reverse_all_the_elements_the_list();
                break;
            case 9:
                s1.length_of_the_list();
                break;
            default:
                cout<<endl<<"Invalid choice"<<endl;
                break;
        }
    }
    return 0;
}