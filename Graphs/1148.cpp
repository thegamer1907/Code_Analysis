#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vector<int>> vvi;

void cinv(vi &v,int a, int s)
{
  for(int i=a;i<=s;i++)
    cin >> v[i];
}

int found=0;

void dfs(vvi &ptr, int src, int target ,vb &visited)
{
  if(src==target)
    found=1;
  for(auto a:ptr[src])
  {
    if(!visited[a])
    {
      visited[a]=true;
      dfs(ptr,a,target,visited);
    }
  }
}
int main()
{
  int n,t;
  cin >> n >> t;
  vi v(n+1);
  cinv(v,1,n-1);
  vvi G(n+1);
  for(int i=1;i<n+1;i++)
    G[i].pb(i+v[i]);
  vb visited(n+1,false);
  dfs(G,1,t,visited);
  cout << (found?"YES\n":"NO\n");
}
