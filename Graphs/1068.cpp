#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+10;

vector < int > adj[MAX];
bool vis[MAX];

bool BFS(int src,int t)
{
    queue < int > q;

    vis[src] = true;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        if(u == t)
            return 1;

        for(int i=0;i<adj[u].size();i++)
        {
            int x = adj[u][i];
            if(!vis[x])
            {
                q.push(x);
                vis[x] = true;
            }
        }
    }
    return 0;
}
int main()
{
    int n,m,u,v;

    cin >> n >> m;

    for(int i=1;i<=n-1;i++)
    {
        cin >> u;
        adj[i].push_back(i+u);
    }

    if(BFS(1,m))
        cout << "YES\n";
    else
        cout << "NO\n";
}
