#include <iostream>
using namespace std;

#define CAPACITY 5

class Stack{

    private:
        int top;
        int stack[CAPACITY];

    public:
        Stack(){
            top = -1;
            for (int i = 0; i < CAPACITY; i++){
                stack[i] = 0;
            }
        }

        int is_full(){
            if (top == CAPACITY - 1){
                return 1;
            }
            else{
                return 0;
            }
        }

        int is_empty(){
            if (top == -1){
                return 1;
            }
            else{
                return 0;
            }
        }

        void push(){
            int element;
            if (is_full()){
                cout<<"stack is full"<<endl;
            }
            else{
                cout<<"Enter the element you want to insert: "<<endl;
                cin>>element;
                top++;
                stack[top] = element;
                cout<<"Element "<<element<<" is inserted"<< endl;
            }
        }

        void display(){
            if (is_empty()){
                cout<<"No element in the stack"<<endl;
            }
            else{
                cout<<"Elements in the stack are: "<<endl;
                for (int i = top; i > -1; i--){
                    cout<<stack[i]<<endl;
                }
            }
        }

        int pop(){
            int ele;
            if (is_empty()){
                cout<<"stack is empty"<<endl;
            }
            else{
                ele = stack[top];
                cout<<"Deleted element is: "<<ele<<endl;
                top--;
            }
            return top;
        }

        int peek(){
            if (is_empty()){
                return 0;
            }
            else{
                cout<<"Last element in the stack is: "<<stack[top]<<endl;
            }
        }
};

int choice(){
    int choice;

    cout<<"1: Insert the element into the stack\n2: Delete the last element from the stack"<<endl;
    cout<<"3: Display all the elements in the stack\n4: Display the last element in the stack\n5: Exit"<<endl;
    cout<<"\nEnter your choice"<<endl;
    cin>>choice;
    return choice;
}

int main(){
    Stack s1;
    while (1){
        switch(choice()){
            case 1: 
                s1.push();
                break;
            case 2: 
                s1.pop();
                break;
            case 3: 
                s1.display();
                break;
            case 4: 
                s1.peek();
                break;
            case 5: 
                exit(0);
                break;
            default: 
                cout<<"Invalid Choice"<<endl;
                break;
        }
    }
    return 0;
}