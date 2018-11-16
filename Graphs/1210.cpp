#include <bits/stdc++.h>
using namespace std;
int n,t,x;
vector <int> v[200000];
bool vis[200000];
void dfs(int a)
{
    vis[a]=1;
    for(int i=0;i<v[a].size();i++)
    {
        if(!vis[v[a][i]])
        {dfs(v[a][i]);}
    }
}
int main()
{
    cin >> n >> t;
    for(int i=1;i<=n-1;i++)
    {
        cin >> x;
        v[i].push_back(i+x);
    }
    dfs(1);
    if(vis[t]==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}