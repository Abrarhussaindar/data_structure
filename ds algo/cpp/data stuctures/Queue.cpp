#include<iostream>
using namespace std;

#define CAPACITY 5

class Queue{

    private:
        int front;
        int rear;
        int queue[CAPACITY];

    public:
        Queue(){
            front = 0;
            rear = 0;
        }

        void enqueue(){
            int ele;
            if(CAPACITY == rear){
                cout<<"\nQueue is Full"<<endl;
            }else{
                cout<<"\nEnter the element you want to insert in the Queue: "<<endl;
                cin>>ele;
                queue[rear] = ele;
                rear++;
            }
        }

        void display(){
            if(front == rear){
                cout<<"\nQueue is Empty"<<endl;
            }else{
                cout<<"\nQueue elements are: "<<endl;
                for(int i=front; i<rear; i++){
                    cout<<"\t"<<queue[i];
                }
            }
        }

        void dequeue(){
            if(front == rear){
                cout<<"\nQueue is Empty"<<endl;
            }else{
                cout<<"Deleted element is: "<<queue[front]<<endl;
                for(int i=front; i<rear-1; i++){
                    queue[i] = queue[i+1];
                }
                rear--;
            }
        }
};

int menu(){
    int choice;
    cout<<"\n1: Insert the Element into the Queue"<<endl;
    cout<<"\n2: Display Element of the Queue"<<endl;
    cout<<"\n3: Delete a Element from the queue"<<endl;
    cout<<"\n4: Exit"<<endl;

    cout<<"\nEnter your choice:"<<endl;
    cin>>choice;
    return choice;
}

int main(){
    Queue q1;

    while(1){
        switch (menu()){
        case 1:
            q1.enqueue();
            break;
        case 2:
            q1.display();
            break;
        case 3:
            q1.dequeue();
            break;  
        case 4:
            exit(0);
            break;     
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
    return 0;
}