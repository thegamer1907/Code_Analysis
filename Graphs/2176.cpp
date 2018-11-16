#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

const int N = 1e5 + 2, M = 1e3+5, OO = 0x3f3f3f3f, mod = 1e9+7;

int n, ans = OO, m;

int vis[N];
void DFS(int u, int presses){
  if(vis[u] <= presses)  return;
  if(u == m)  ans = min(ans, presses);
  vis[u] = presses;
  if(u != 1)  DFS(u-1, presses+1);
  if(u <= 2*m)  DFS(u*2, presses+1);
}

int main(){
  scanf("%d %d", &n, &m);
  fill(vis, vis+N, OO);
  DFS(n, 0);
  printf("%d\n", ans);
  return 0;
}
