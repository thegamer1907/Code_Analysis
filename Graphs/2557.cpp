#include<bits/stdc++.h>
using namespace std;
int ans=1;
vector<int> eg[10004];
int p[10004];
int c[10004];
void dfs(int u)
{
    ans++;
    for(int i=0;i<eg[u].size();i++){
        int v=eg[u][i];
        if(c[v]==c[u]) continue;
        else dfs(v);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        scanf("%d",&p[i]);
        eg[p[i]].push_back(i);
    }
    for(int i=1;i<=n;i++) scanf("%d",&c[i]);
    for(int i=2;i<=n;i++){
        if(c[i]!=c[p[i]]) ans++;
    }
    printf("%d\n",ans);
}
