#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
	int n , m , k ;
	cin >> n >> m >> k ;
	int a[m] ;
	for(int i = 0 ; i < m ; i++) {cin >> a[i] ;}
	int ind = 0 , x = 1 , count = 0;
	for(int i = 0 ; i < m ;){
		count++ ;
		while(a[i] - ind > x*k ) x++ ;
		int kind = ind ;
		int cnt = 0 ;
		while(i < m && a[i]-kind <= x*k && cnt < k){
			cnt++ ;
			ind++ , i++ ;
		}
	}
	cout << count ;
	return 0;
}