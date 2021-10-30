#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    cout<<"before swapping: "<<endl;
    cout<< a <<b<< endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"after swapping: "<<endl;
    cout<<a <<b<<endl;
    return 0;
}