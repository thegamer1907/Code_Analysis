// In The Name Of God :
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using namespace std ;
using namespace __gnu_pbds;
#define X first 
#define Y second
#define int long long 
typedef long long ll ;
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
typedef pair < int , int > pii ; 
typedef pair < pii , int > pii_i ;
typedef pair < pii , pii > pii_ii ;
#define ordered_set(TYPE) tree<TYPE, null_type, less<TYPE>, rb_tree_tag, tree_order_statistics_node_update>
//#define "%I64d" "%I64d"
const int maxn = 1e5 + 10 ;
const int maxL = 21 ;
//const int inf = 1e13 ;
const int mod = 1e9+7 ;
int n , b [ maxn ] , ar [ maxn ] , S  ;

int check ( int x )
{
  for ( int i = 0 ; i < n ; i ++)
    b [ i ] = ar [ i ] + (i+1)*x ;
  sort ( b , b + n ) ; 
  int ret = 0 ;
  for ( int i = 0 ; i < x ; i ++)
    ret += b [ i ] ;
  return ret ;
} 

main ( )
{
  fast ;
  
  cin >> n >> S ;
  for ( int i = 0 ; i < n ; i ++ )
    cin >> ar[ i ] ;
  int low = 0 , high = n + 1 ;
  while ( (high-low) > 1 )
    {
      int mid = (low+high) >> 1 ;
      if ( check ( mid ) <= S )
	low = mid ;
      else
	high = mid ;
    }  
  cout << low << ' ' << check ( low ) ;
}
