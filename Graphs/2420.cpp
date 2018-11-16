#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(n) for(int i=1; i<=n; i++)
#define loopo(n) for(int i=0; i<=n; i++)
vector<vector<int>> g(1000007);
ll t,s=0,smax=0;
char used[1000007]={0};
int dfs(int x, int s)
{
        if(used[x]==1)return 0;
        s++;
        if(s>smax)smax=s;
        used[x]=1;
        for(int i=0; i<g[x].size();i++)
        {
            dfs(g[x][i],s);
        }
  return 0;
}
int main()
{
ios::sync_with_stdio (false);
cin.tie(0);
cout.tie(0);
ll n,m,i,j,k,a,b;
cin>>n;
loop(n)
{
    cin>>a;
    if(a>0)
    g[a].push_back(i);
}
loop(n)
{
        for(j=1;j<=n;j++)used[j]=0;
        s=0;
        used[i]=1;
        for(j=0;j<g[i].size();j++)
        {
        dfs(g[i][j],s);
        }
}
cout<<smax+1;
return 0;
}
