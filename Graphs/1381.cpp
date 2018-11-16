#include <bits/stdc++.h>

using namespace std;

//bool vis[30001];
vector< int > adj[30001];
    int n, t;

int dfs(int node )
{
    if (node == t)
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (node > t)
    {
        cout << "NO" << endl;
        return 0;
    }
        dfs(node + adj[node][0]);
    /*
    if(vis[node]==1)
        return 0;
    vis[node]=1;
    for(auto u : adj[node])
    {
        dfs(u);
    }
    */
}

int main()
{
    cin >> n >> t;
    int t1 = 1;
    for(int i = 1; i < n; i ++)
    {
        int t2;
        cin >> t2;
        adj[i].push_back(t2);
        t1 = t2;
             /// Undirected
             /// adj[t2].push_back(t1);
    }
    dfs(1);
}
