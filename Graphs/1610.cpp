#include<bits/stdc++.h>

using namespace std;
vector<int>adj[30009];
bool vis[30009];


void dfs(int u){
    vis[u]=true;

    for(auto v:adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);

    for(int i=1;i<n;i++){
        int x;
        scanf("%d",&x);
        adj[i].push_back(i+x);
    }
    dfs(1);
    if(vis[t]){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
