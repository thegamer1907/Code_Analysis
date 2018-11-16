#include<bits/stdc++.h>
using namespace std;
int a[2005];
int vis[2005];
int res;
int N;
void dfs(int x)
{
    res++;
    if(a[x]==-1)
        return;
    dfs(a[x]);
}
int main()
{
    while(cin>>N)
    {
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=N;i++)
            cin>>a[i];
        int ans=0;
        for(int i=1;i<=N;i++)
        {
            res=0;
            dfs(i);
            ans=max(ans,res);
        }
        cout<<ans<<endl;
    }
    return 0;
}
