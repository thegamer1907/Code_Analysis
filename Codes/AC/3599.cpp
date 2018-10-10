#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 2e5 + 7 ;
typedef long long ll ;
ll a[maxn] , b[maxn] , c[maxn] , d[maxn] ;
int main(void){
	
	ll n , m , k , x , s , ans ;
	scanf("%I64d%I64d%I64d%I64d%I64d",&n,&m,&k,&x,&s );
	ans = x * n ;
	for ( int i = 1 ; i <= m ; i ++ )	scanf("%I64d",&a[i] );
	for ( int i = 1 ; i <= m ; i ++ )	scanf("%I64d",&b[i] );
	for ( int i = 1 ; i <= k ; i ++ )	scanf("%I64d",&c[i] );
	for ( int i = 1 ; i <= k ; i ++ )	scanf("%I64d",&d[i] );
	
	a[0] = x ;
	for ( int i = 0 ; i <= m ; i ++ ){
		ll p = s - b[i] ;
		if ( p >= 0 ){
			ans = min ( ans , a[i] * n );
			int pos = upper_bound ( d + 1 , d + 1 + k , p ) - d - 1 ;
			if ( pos > 0 )	ans = min ( ans , a[i] * max ( 0LL , n - c[pos] ) );
		}
	}
	printf("%I64d\n",ans );
	
	return 0 ;
}