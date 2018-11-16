#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> adj[100001];
int visited[100001],check[100001],a[100001];
int ans=0;
void dfs(int x,int cnt,int m)
{ visited[x]=1;
  if(cnt>m) 
    check[x]=1;
  if(adj[x].size()==1 && visited[adj[x][0]] && check[x]==0)
    ans++;
  for(auto it : adj[x])
   { if(!visited[it])
     { check[it]=check[x];
       if(a[it])
        dfs(it,cnt+1,m);
       else
        dfs(it,0,m);
     }
       
   }
}

int main()
{ int n,m;cin>>n>>m;
  for(int i=0;i<n;i++)
    cin>>a[i+1];
  for(int i=1;i<n;i++)
    { int x,y;cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
    int cnt=0;
    if(a[1]) cnt=1;
    dfs(1,cnt,m);
    cout<<ans;
 return 0; 
}