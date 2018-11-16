#include <bits/stdc++.h>
using namespace std;

#define mp              make_pair
#define pb              push_back
#define ff              first
#define ss              second
#define inc(A,B)        A=(A+(B))%MOD
#define mul(A,B)        (ll(A)*ll(B)%ll(MOD))
#define sub(a,b)        (((a)-(b)+MOD)%MOD)

typedef pair < int ,int > pii;
typedef long long ll;
typedef complex < ll > pt;

const int MAX_N = 100005;
const int MOD = 1e9 + 7;

int n, par, edg;
int arr[MAX_N];

vector <pii> son[MAX_N];

int dfs ( int node, ll maxi, ll edg ) {

  ll maxEndHere = max ( edg, maxi+edg );
  if ( maxEndHere > arr[node] ) return 0;

  int res = 1;
  for ( auto &it : son[node] )
    res += dfs ( it.ff, maxEndHere,(ll) it.ss );
  return res;

}

int main() {

//  freopen ( "in.txt" , "r" , stdin );
//  freopen ( "out.txt" , "w" , stdout );

  scanf ( "%d", &n );
  for ( int i = 0; i < n; ++i )
    scanf ( "%d", arr+i );

  for ( int i = 1; i < n; ++i ) {
    scanf ( "%d%d", &par, &edg );
    son[--par].pb ( pii ( i, edg ) );
  }

  printf ( "%d\n", n-dfs ( 0, 0, 0 ) );

  return 0;

}
