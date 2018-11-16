#include<bits/stdc++.h>
using namespace std;

vector<int>adj[60001];
bool visit[60001];
int a[60001];

void DFS(int u=1)
{
    visit[u] = true;
    for(int i=0;i<adj[u].size();i++)
        if(!visit[adj[u][i]])
            DFS(adj[u][i]);
}

int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];
        adj[i].push_back(i+a[i]);
    }
    DFS();
    if(visit[t])
        puts("YES");
    else
        puts("NO");
    return 0;
}
