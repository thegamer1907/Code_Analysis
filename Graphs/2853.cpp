#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TAM 100100

struct Edge { int to, c; };

int val[TAM];
vector<Edge> tree[TAM];

int fcount ( int i, int pi=-1 ) {
  int ans = 1;
  for ( Edge& e : tree[i] )
    if ( e.to != pi )
      ans += fcount(e.to, i);
  return ans;
}

int dfs ( int i, ll dist, int pi=-1 ) {
  if ( dist > val[i] )
    return fcount(i,pi);
  int ans = 0;
  for ( Edge& e : tree[i] ) {
    if ( e.to == pi ) continue;
    ans += dfs(e.to, max(dist,0LL)+e.c, i);
  }
  return ans;
}

int main() {
  int n;
  scanf ( "%d", &n );
  for ( int i = 0; i < n; ++i )
    scanf ( "%d", val+i );
  for ( int i = 1, b, c; i < n; ++i ) {
    scanf ( "%d%d", &b, &c );
    tree[i].push_back ( Edge{b-1,c} );
    tree[b-1].push_back ( Edge{i,c} );
  }

  printf("%d\n", dfs(0, 0ll ));
  return 0;
}
