#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
	ios :: sync_with_stdio(0) ;
	cin.tie(0) ;
	int n , m , k ;
	cin >> n >> m >> k ;
	int a[m] ;
	for(int i = 0 ; i < m ; i++) {cin >> a[i] ;}
	int ind = 0 , count = 0 , x ;
	for(int i = 0 ; i < m ;){
		count++ ;
			x = (a[i]-ind-1)/k + 1 ;
		int kind = ind ;
		int count = 0 ;
		while(i < m && a[i]-kind <= x*k && count < k){
			ind++ , i++ ;
		}
	}
	cout << count ;
	return 0;
}