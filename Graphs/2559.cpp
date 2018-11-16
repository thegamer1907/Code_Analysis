#include <bits/stdc++.h>

using namespace std;

int n, p[10001], c[100001], par[10001], depth[10001];


void make_set(int v){
  par[v] = v;
}

int find_set(int v){
  if(v!=par[v])
    par[v] = find_set(par[v]);
  return par[v];
}

void union_sets(int v, int u){
  v = find_set(v);
  u = find_set(u);
  if(v!=u){
    if(depth[v] < depth[u])
      swap(v, u);
    par[u] = v;
    if(depth[v] == depth[u])
      depth[v]++;
  }
}


int main(){

  cin >> n;
  for(int i=2; i<=n; i++)
    cin >> p[i];
  for(int i=1; i<=n; i++)
    cin >> c[i];

  for(int i=1; i<=n; i++)
    make_set(i);

  for(int i=2; i<=n; i++){
    if(c[i]==c[p[i]])
      union_sets(i, p[i]);
  }

  int ans = 0;
  for(int i=1; i<=n; i++)
    if(i == par[i]) ans++;

  cout << ans;

 return 0;
}