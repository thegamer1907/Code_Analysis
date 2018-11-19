#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5 ;
#define int long long int 

signed main() {
	cin.tie(NULL) ; 
	cout.tie(NULL) ; 
	ios::sync_with_stdio(0) ; 
	double h , m , s , t1 , t2 ; cin >> h >> m >> s >> t1 >> t2 ;
	t1 *= 5.00 ; 
	t2 *= 5.00 ; 
	double arr[5] ; 
	arr[0] = h*(5.00) ;
	arr[1] = m ; 
	arr[2] = s ; 
	if ( m || s ) arr[0] += 0.500000 ; 
	if ( s ) arr[1] += 0.5000000 ;
	sort ( arr , arr + 3 ) ;
	arr[3] = 60 + arr[0] ;
	if ( ( min ( t1 , t2 ) <= arr[0] && max ( t1 , t2 ) <= arr[0]) || (min ( t1 , t2 ) >= arr[0] && max ( t1 , t2 ) <= arr[1]) || (min ( t1 , t2 ) >= arr[1] && max ( t1 , t2 ) <= arr[2]) || (min ( t1 , t2 ) >= arr[2] && max ( t1 , t2 ) <= arr[3])) {
		cout << "YES\n" ;
		return 0 ;
	}
	if ( t1 > t2 ) swap ( t1 , t2 ) ;
	t1 += 60 ; 
	if ( ( min ( t1 , t2 ) <= arr[0] && max ( t1 , t2 ) <= arr[0]) || (min ( t1 , t2 ) >= arr[0] && max ( t1 , t2 ) <= arr[1]) || (min ( t1 , t2 ) >= arr[1] && max ( t1 , t2 ) <= arr[2]) || (min ( t1 , t2 ) >= arr[2] && max ( t1 , t2 ) <= arr[3])) {
		cout << "YES\n" ;
		return 0 ; 
	}
	cout << "NO\n" ; 
	return 0 ; 
}