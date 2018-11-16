#include<bits/stdc++.h>
using namespace std;
vector<int> g[10001];

void dfs(int x)
{
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=-1)
        g[a[i]].push_back(i+1);
    }
    int ans,ans1;
    for(int i=1;i<=n;i++)
    {
        ans1=0;
        bool visited[10001]={0};   
        int color[10001]={0};

        if(g[i].size()>0)
        {
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                for(int j=0;j<g[x].size();j++)
                {
                    if(visited[g[x][j]]==false)
                    {                 
                         visited[g[x][j]]=true;
                         q.push(g[x][j]);
                         color[g[x][j]]=(color[x]+1);
                        ans1=max(ans1,color[g[x][j]]);
                    }
                       
                }
            }
        }
        ans=max(ans,ans1);
    }
    cout<<ans+1;
    return 0;
}
