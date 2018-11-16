#include <bits/stdc++.h>

#define PB          push_back
#define PF          push_front
#define MP          make_pair
#define FI          first
#define SE          second
#define SIZE( A )   int( ( A ).size( ) )
#define ALL( A )    ( A ).begin( ), ( A ).end( )
#define ALLR( A )   ( A ).rbegin( ), ( A ).rend( )

using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         lf;
typedef pair< int, int >    pii;
typedef pair< ll, ll >      pll;
typedef vector< bool >      vb;
typedef vector< lf >        vd;
typedef vector< ll >        vll;
typedef vector< int >       vi;
typedef vector< pii >       vpii;

const int MAXN = int( 1e5 )+10;
const int MOD  = int( 1e9 )+7;
const int oo   = INT_MAX;

int n;
int arr[ MAXN ];

vpii graph[ MAXN ];

int dfs( int u, int p = -1, ll sum = 0, bool del = false ) {
  del |= sum > arr[u];
  int ans = del;
  for( auto& e : graph[u] ) {
    int v = e.FI, w = e.SE;
    if( v == p ) continue;
    ans += dfs( v, u, max(0LL, sum+w), del );
  }
  return ans;
}

int main( ) {

  //freopen( ".in", "r", stdin );
  //freopen( ".out", "w", stdout );

  while( scanf( "%d", &n ) == 1 ) {
    for( int i = 0; i < n; ++i ) scanf( "%d", &arr[i] );
    for( int i = 1; i < n; ++i ) {
      int p, c; scanf( "%d %d", &p, &c );
      p--;
      graph[i].PB( {p,c} );
      graph[p].PB( {i,c} );
    }
    printf( "%d\n", dfs(0) );
  }

  return 0;
}
