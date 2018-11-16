#include <bits/stdc++.h>
using namespace std;
int n, a, mark[2010];
vector<int> g[2010];

int dfs(int v){
  if(mark[v] != -1 ) return mark[v];
  mark[v] = 0;
  
  for(int i = 0; i < g[v].size();i++){
    mark[v] = max(mark[v], dfs(g[v][i])+1);
  }
  return mark[v];
}

int main() {
  cin >> n;
  for(int i = 0; i <= n; i++ )mark[i] = -1;
  int sol = 0;
  for(int i = 1; i <= n; i++){
    cin >> a;
    if( a != -1 ){
      g[a].push_back(i);
    }
    
  }
  for(int i = 1; i <= n; i++){
    sol = max(sol, dfs(i));
  }
  cout << sol+1 << endl;
  
}