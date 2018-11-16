#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 1e4+5;
vector<int> edge[maxn];
int color[maxn];
int dfs(int u,int p)
{
    int ans = (color[u] != color[p]);
    for(int v : edge[u])
    {
        if(v == p) continue;
        ans += dfs(v,u);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 2;i<=n;i++)
    {
        int x;
        cin>>x;
        edge[x].push_back(i);
        edge[i].push_back(x);
    }
    for(int i =1;i<=n;i++)
    {
        cin>>color[i];
    }
    int ans = dfs(1,-1);
    cout<<ans<<endl;
    return  0;
}
