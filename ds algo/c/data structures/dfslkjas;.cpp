#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin>>n;

    ll reverse;

    while(n>0){
        ll last_digit = n%10;
        reverse = reverse*10 + last_digit;
        n = n/10;
    }
    cout<<reverse<<endl;
    return 0;
}