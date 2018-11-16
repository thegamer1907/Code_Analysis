#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100000];
int n, t;
int dfs(int node)
{
    if (node == t)
    {
        cout << "YES";
        return 0;
    }
    else if (node > t)
    {
        cout << "NO";
        return 0;
    }
    dfs(node + adj[node][0]);
}

int main()
{
    cin >> n >> t;
    for(int i = 1; i < n; i ++)
    {
        int t2;
        cin >> t2;
        adj[i].push_back(t2);
    }
    dfs(1);
}
