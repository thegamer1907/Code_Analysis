// Think Twice Code Once
// NullByte 0x00
#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int MAXN = (ll) 1e5 ;
const int INF = (ll) 1e8 ;
const int MOD = (ll) 1e9 + 7 ;
const int CHR = 97 ;
#define _Sync ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define _File freopen ( "input.txt" , "r" , stdin ) ; freopen ( "output.txt" , "w" , stdout ) ;
#define _End return cout << '\n' , 0 ;
#define pb push_back
#define mp make_pair
#define X first
#define Y second
// Code
ll cnt , ans[2] ;
int digit_sum(int temp) {
	int sum = 0 ;
	while(temp) {
		sum += temp % 10 ;
		temp /= 10 ;
	}
	return sum ;
}
int main() {
	_Sync
	// Begin Main Code
	int n ;
	cin >> n ;
	for ( ll i = 19 ; i < INF ; i += 9 ) {
		if ( digit_sum(i) == 10 )
			ans[cnt % 2] = i , cnt ++ ;
		if ( cnt == n )
			break ;
	}
	cout << ans[(n - 1) % 2] ;
	// End Main Code
	_End
}
