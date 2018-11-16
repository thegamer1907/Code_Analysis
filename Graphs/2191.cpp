#include<bits/stdc++.h>
using namespace std;

int par[40001];
int adj[40001][2];
void bfs(int,int);

int main()
{
    for(int i=1;i<40001;i++)
    {
        if(i-1) adj[i][0]=i-1;
        else adj[i][0]=0;
        adj[i][1]=2*i;
    }
    //
    int n,m;
    cin>>n>>m;
    if(n>m) cout<<n-m<<endl;
    else
    {
        bfs(n,m);
        //
        int ans=0;
        while(n!=m)
        {
            ans++;
            m=par[m];
        }
        cout<<ans<<endl;
    }

}

void bfs(int n,int m)
{
    bool seen[40001];
    memset(seen,0,sizeof seen);
    seen[n]=1;
    //
    queue<int>q;
    q.push(n);
    //
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        //
        for(int i=0;i<2;i++)
        {
            if(adj[temp][i] && seen[adj[temp][i]]==0 && adj[temp][i]<=m*2)
            {
                seen[adj[temp][i]]=1;
                q.push(adj[temp][i]);
                par[adj[temp][i]]=temp;
                if(adj[temp][i]==m) return;
            }
        }
    }
}