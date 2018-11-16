#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;
const int INF=(int)1e9+10;
const int MOD=(int)1e9+7;
vector<vector<int>> adj;
vector<int> parent,color;
int dfs(int);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    adj.resize(n+1);
    color.resize(n+1);
    parent.resize(n+1);
    parent[1]=1;
    for(int i=2;i<=n;i++)
        cin>>parent[i],adj[parent[i]].push_back(i);
    for(int i=1;i<=n;i++)
        cin>>color[i];
    cout<<dfs(1)+1;
    return 0;
}

int dfs(int u)
{
    int ret=0;
    if(color[u]!=color[parent[u]])
        ret++;
    for(int v:adj[u])
        ret+=dfs(v);
    return ret;
}
