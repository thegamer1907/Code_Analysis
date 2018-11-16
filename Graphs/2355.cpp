#include <bits/stdc++.h>
using namespace std;
int n,x,res;
std::vector<int> adj[2004],roots;
int dfs(int cur, int d){
  int ret = d;
  for(int e : adj[cur])
    ret = max(ret, dfs(e, d+1));
  return ret;
}
int main(){
  std::cin >> n;
  for(int i = 1; i<=n; i++){
    std::cin >> x;
    if(x==-1) roots.push_back(i);
    else adj[x].push_back(i);
  }
  for(int r : roots){
    res = max(res, dfs(r,1));
  }
  std::cout << res << '\n';
}
