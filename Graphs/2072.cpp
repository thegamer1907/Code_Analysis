#include<bits//stdc++.h>
using namespace std;
int dist[40050];
int vis[40050];

int bfs(int src,int dest)
{
    queue<int>q;
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        int v1,v2;
        v1 = 2*u;
        v2 = u-1;
        if(v1<=30000 && !vis[v1])
        {
            vis[v1] = 1;
            dist[v1] = dist[u]+1;
            q.push(v1);
        }
        if(v2>=0 && !vis[v2])
        {
            vis[v2] = 1;
            dist[v2] = dist[u]+1;
            q.push(v2);
        }
    }
    return dist[dest];
}
int main()
{
    int n,m;
    cin >> n >> m;
    if(n>=m) cout << n-m<< "\n";
    else
    cout << bfs(n,m) << "\n";
    return 0;
}
