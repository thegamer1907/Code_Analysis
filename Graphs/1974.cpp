#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,ans;
std::vector<int> p[100009];
bool vis[100009],cats[1000009],h[1000009];
set<int> s;
void dfs(int u=1,int c=0)
  {
    // cout<<u<<endl;
    if(cats[u])++c;else c=0;
    if(c>m)return;
    vis[u]=1;
    int si=p[u].size();
    if(si==1 && u>1){ans+=1;return ;}
    for(int i=0;i<si;++i)
        if(!vis[p[u][i]])
          dfs(p[u][i],c);
  }
int main()
{
    scanf("%d %d",&n,&m );
    for(int i=1;i<=n;i++)cats[i]=(scanf("%d",&a ),a);

    for(int i=0;i<n-1;i++)
      {
        scanf("%d %d",&a,&b );
        p[a].push_back(b);
        p[b].push_back(a);
      }
        dfs();
      // int ans=0;
      // for(int i=2;i<=n;i++)
      //   ans+=(h[i]&&vis[i]);
      // for(int i=2;i<=n;i++)
        // cout<<p[i].size()<<' ';
      printf("%d\n",ans );
}