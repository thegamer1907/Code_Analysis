#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<map>
using namespace std ;
using namespace std ;
#define ll long long 
#define all(x) x.begin() , x.end()
#define pb push_back
const int oo = 1e9 ;
const int N = 3e4+10, M = 1e5+1;
int nodes ,a ,dst ,ans;
vector<int>g[N];
bool vis[N] ;
void dfs(int v)
{
	vis[v] = true ;
	for(int i = 0 ; i < g[v].size(); ++i)
	{
		int u = g[v][i];
		if(!vis[u])dfs(u);
	}
}
int main(){
 //freopen("input.txt"  , "r" , stdin);
  scanf("%d%d" , &nodes , &dst);
  for(int i = 1 ; i <= nodes ; ++i)
  {
  	scanf("%d" , &a);
  	g[i].pb(i+a);
  }
  dfs(1);
  if(!vis[dst])cout << "NO\n";
  else cout << "YES\n";
}