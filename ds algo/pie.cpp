#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void test(int num);

int main(){
    // double pi = 3.14;
    // cout << pow(pi, pow(pi, pi));

    ll num;
    cout<<"enter any number\n";
    cin>>num;
    // cin>>num;
    test(num);
    // if(num == 0){
    //     return 1;
    // }else if(num %2 == 0){
    //     cout<<"prime";
    // }else{
    //     cout<<"false";
    // }
    return 0;
}

void test(int num){

    if(num == 0){
        cout<<"1";
    }else if(num %2 == 0){
        cout<<"even\n";
        int n = num/2;
        cout<<n;
        test(n);
        
    }else{
        cout<<"false\n";
        int j = 3*num+1;
        cout<<j;
        test(j);
        
    }
}