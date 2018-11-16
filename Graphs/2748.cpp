#include<bits/stdc++.h>
#pragma GCC optimize("O2")
using namespace std;
int n,m;
vector<int>v[100002];
bool viz[100002];
long long sol,mini,cost[100002];
void dfs(int nod)
{
    viz[nod]=1;
    mini=min(mini,cost[nod]);
    for(int i=0;i<v[nod].size();++i)
    {
        int vecin=v[nod][i];
        if(!viz[vecin])
            dfs(vecin);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        cin>>cost[i];
    for(int i=1;i<=m;++i)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;++i)
        if(!viz[i])
        {
            mini=2e9;
            dfs(i);
            sol+=mini;
        }
    cout<<sol;
    return 0;
}
