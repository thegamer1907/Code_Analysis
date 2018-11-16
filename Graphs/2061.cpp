#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 7;
int a[maxn],ans,n,m;
vector<int> g[maxn];
void dfs(int u,int p,int c)
{
    if(c+a[u]>m)return ;
    for(auto &it : g[u])
    {
        if(it!=p)
        {
            if(a[u])dfs(it,u,c+a[u]);
            else    dfs(it,u,0);
        }
    }
    if(g[u].size()==1&&g[u][0]==p)ans++;
}
int main()
{
    //int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;++i)cin >> a[i];
    for(int i=1,u,v;i<n;++i)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0,0);
    cout << ans << endl;

    return 0;
}
