#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define ll long long int

auto z_algo(string str){
    ll len = str.length();
    ll l=0,r=0;
    vector<ll> z(len);
    for(ll i=1;i<len;i++){
        if(i>r){
            l=r=i;
            while(r<len and str[r]==str[r-l]){
                r++;
            }
            z[i] =r-l;
            r--;
        }else{
            ll indx = i-l;
            if(i+z[indx]<=r){
                z[i] = z[indx];
            }else{
                l=i;
                while(r<len and str[r]==str[r-l]){
                    r++;
                }
                z[i]=r-l;
                r--;
            }
        }
    }
    return z;
}

int main(){
    string str,pat;
    cin>>str>>pat;
    string tot = pat + "$" + str;
    auto z = z_algo(tot);
    for(ll i=0;i<z.size();i++){
        if(z[i]==pat.length()){
            cout<<"position: "<<i-pat.length()-1<<endl;
        }
    }
}