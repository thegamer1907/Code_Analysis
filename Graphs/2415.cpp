#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;  cin>>n;
    vector<int> adj[n+1];
    for(int i=1;i<=n;i++)
    {
        int temp;   cin>>temp;
        adj[(temp==-1?0:temp)].push_back(i);
    }
    queue<int> q;   q.push(0);
    int distances[n+1];     memset(distances,0,sizeof(distances));  distances[0]=0;
    bool visited[n+1];      memset(visited,0,sizeof(visited));
    while(!q.empty())
    {
        int u=q.front();    q.pop();
        if(visited[u])
            continue;
        visited[u]=true;
        for(auto v:adj[u])
        {
            q.push(v);
            distances[v]=distances[u]+1;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        if(distances[i]>ans)
            ans=distances[i];
    cout<<ans;
    return 0;
}
