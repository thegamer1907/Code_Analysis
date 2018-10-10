// NullByte.CodeShare
// There'is No PLace Like 127.0.0.1
#include <bits/stdc++.h>
using namespace std ;
// Template
typedef long long ll ;
typedef long double ld ;
const ll INF = 1e9 ;
const ll MAXN = 1e5 + 69 ;
const ll MOD = 1e9 + 7 ;
const ll BASE = 13 ;
#define _Sync ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define _Read freopen ( "input.txt" , "r" , stdin ) ;
#define _Write freopen ( "output.txt" , "w" , stdout ) ;
#define _End return cout << '\n' , 0 ;
#define fastmax(x , y) (((x - y) >> 31) & (x ^ y)) ^ x
#define pie pair<ll , ll>
#define sp setprecision
#define in insert
#define pb push_back
#define mp make_pair
#define X first
#define Y second
// Code
int n , temp , val , indx , arr[MAXN] ;
int main(){
	_Sync
	// Begin Main Code
	cin >> n , val = INF ;
	for ( int i = 0 ; i < n ; i ++ )
		cin >> arr[i] , arr[i] -= i ;
	for ( int i = 0 ; i < n ; i ++ ) {
		temp = 0 ;
		if ( arr[i] > 0 )
			temp = (arr[i] + n - 1) / n ;
		if ( temp < val )
			val = temp , indx = i ;
	}
	cout << indx + 1 ;
	// End Main Code
	_End
}
