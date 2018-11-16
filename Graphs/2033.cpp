#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define modn 1000000007
#define hell 1000000009
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define INF INT_MAX
using namespace std;
#define sz 100005
int n,m;
vector<int> graph[sz];
bool vis[sz];
bool iscat[sz];
int ans = 0;
void dfs(int u, int cat)
{
    vis[u] = true;
    if(iscat[u]) cat++;
    if(cat > m)
        return;
    if(!iscat[u]) cat = 0;
    //cout<<u<<" "<<cat<<endl;
    if(graph[u].size() == 1 and u != 1) ans++;
    for(auto v: graph[u])
    {
        if(!vis[v])
            dfs(v, cat);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>iscat[i];
    for(int i=0; i<n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    memset(vis, false, sizeof(vis));
    dfs(1, 0);
    cout<<ans<<endl;
    return 0;
}