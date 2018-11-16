#include <bits/stdc++.h>
using namespace std;
const int N = 100000;

bool vis[ N + 1 ];
int A[ N + 1 ], dp[ N + 1 ];

int main(){
  int n, m, l, x;
  cin >> n >> m;
  for( int i=0; i<n; ++i ) cin >> A[ i ];
  dp[ n - 1 ] = 1;
  vis[ A[ n - 1 ] ] = 1;
  for( int i = n-2; i >= 0; i-- ){
    dp[ i ] = dp[ i + 1 ] + ( 1 - vis[ A[ i ] ] );
    vis[ A[ i ] ]  = 1;
  }
  while( m-- ){
    cin >> l;
    l--;
    cout << dp[ l ] << endl;
  }
  return 0;
}
