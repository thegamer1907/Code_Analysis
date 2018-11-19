#include<bits/stdc++.h>
using namespace std ;
const int maxn = 5e5 +100 ;
const int maxL = 20 ;
#define fast ios_base::sync_with_stdio(false),cin.tie(),cout.tie()
#define X first
#define Y second
#define int long long 
typedef long double ld ;
typedef pair < int , int > pii ;
typedef pair < pii , int > pii_i ;
const int mod = 1e9+7 ;
const int inf = 2e16 ;
#define ALL(x) (x).begin(),(x).end()
int n ;
string s , t [ maxn ] ;

int32_t main ( )
{
  fast ;
  cin >> s ;
  cin >> n ;
  for ( int i = 0 ; i < n ;i ++)
    cin >> t [ i ];
  for ( int i = 0 ; i < n ; i ++ )
    {
      if ( t [ i]  == s )
	return cout << "YES" << endl , 0  ;
      for ( int j = 0 ; j < n ; j ++)
	if ( t [ i ] [ 1 ] == s [ 0 ] && t [ j ] [ 0 ] == s [ 1 ] )
	  return cout << "YES" << endl , 0  ;
    }
  	return cout << "NO" << endl , 0  ;

}
