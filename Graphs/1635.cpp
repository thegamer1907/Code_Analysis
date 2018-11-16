#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100001];
int visited[100001];
void dfs(int root){
    visited[root]=1;
    for(int i=0;i<graph[root].size();i++){
        if(!visited[graph[root][i]])
            dfs(graph[root][i]);
    }
}
int main(){
    int n,t,i,a;
    cin>>n>>t;
    for(i=1;i<n;i++){
        cin>>a;
        graph[i].push_back(i+a);
    }
    dfs(1);
    if(!visited[t]) return cout<<"NO",0;
    
    return cout<<"YES",0;
}