#include <bits/stdc++.h>
#define pb push_back
#define CHOR 30001

std::vector<int> G[CHOR];
bool vis[CHOR];

void dfs_visit(int s)
{
    vis[s] = 1;
    for(int i=0,j=(int)G[s].size();i<j;i++)
    {
        if(!vis[G[s][i]])
        dfs_visit(G[s][i]);
    }
    return;
}

int main(void)
{
    int n,t;
    std::cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        int a;
        std::cin>>a;
        G[i].pb(i+a);
    }
    dfs_visit(1);
    if(vis[t])
    std::cout<<"YES\n";
    else std::cout<<"NO\n";
    return 0;
}
