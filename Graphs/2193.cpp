#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
typedef long long ll;
typedef long double ld;
typedef pair <int,int> ii;

int n,p[2020],ans,deep[2020];
vector <int> adj[2020];

void dfs(int u,int v)
{
    deep[u]=deep[v]+1;

    ans=max(ans,deep[u]);

    for(auto x:adj[u])
        if(x!=v && x!=-1)
            dfs(x,u);
}

int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        adj[p[i]].push_back(i);
        adj[i].push_back(p[i]);
    }

    for(int i=1;i<=n;i++)
        if(p[i]==-1)
            dfs(i,0);

    printf("%d",ans);
}
