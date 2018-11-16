#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 100007
int visited[MAX];
int n;
void addedge(vector<int> adj[],int a,int b){
    adj[a].pb(b);
}
void dfs(int s,vector<int> adj[]){
    visited[s]=1;
    for(auto i:adj[s]){
        if(s==n-1)return;
        if(visited[i]==0) dfs(i,adj);
    }
}
int main(){
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++) visited[i]=0;
    int save=n;
    int index=0;
    vector<int> adj[MAX];
    int x,count=0;
    while(cin>>x){
        //int x;cin>>x;
        addedge(adj,index,index+x);
        index++;
    }
   // cout<<n-1;
    // for(int i=0;i<n-1;i++){
    //     cout<<i<<" -> ";
    //     for(int j=0;j<adj[i].size();j++) cout<<adj[i][j]<<" ";
    //     cout<<"\n";
    // }
    n=save;
    dfs(0,adj);
    if(visited[k-1]) cout<<"YES";
    else cout<<"NO";
    return 0;
}
