#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
    
void LPS_arr(string pat,int m,int lps[]){
    int j=0,i=1;
    lps[0]=0;
    while(i<m){
        if(pat[i] == pat[j]){
            lps[i] = j + 1;
            i++;
        }else{
            if(j != 0){
                j = lps[j-1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMP(string txt,string pat){
    int n = txt.length();
    int m = pat.length();
    int lps[m];

    LPS_arr(pat,m,lps);
    int i=0,j=0;
    while(i < n){
        if(txt[i] == pat[j]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"position: "<<i-j<<endl;
            j = lps[j-1];
        }else if(i<n && pat[j] != txt[i]){
            if(j!=0){
                j = lps[j-1];
            }else{
                i = i+1;
            }
        }
    }
}

int main(){
    string given;
    string find;
    cout<<"enter the given string"<<endl;
    cin>>given;
    cout<<"enter the the string which is to find"<<endl;
    cin>>find;
    KMP(given,find);
    
    return 0;
}