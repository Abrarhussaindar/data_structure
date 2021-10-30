#include<bits/stdc++.h>
using namespace std;

int main(){
    int ver;
    cout<<"enter the no. of vertices: "<<endl;
    cin>>ver;
    int edgs;
    cout<<"enter the no. of edges: "<<endl;   
    cin>>edgs;

    vector<int> adj[ver+1];
    for(int i=0;i<edgs;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout<<endl;

    for(int i=1;i<=ver;i++){
        cout<<i<<"-> ";
        for(auto j:adj[i]){
            cout<<j<<" ";
        }cout<<endl;
    }

    return 0;
}