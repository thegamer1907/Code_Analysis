#include <iostream>
#include <algorithm>
using namespace std ;
int a[1000] ;
int b[1000] ;
int ans ;

int main () {
	int q = -1 ;
	int w = -1001 ;
	int m , n ;
	cin >> m ;
	for(int i = 0 ; i < m ; i++ ) {
		cin >> a[i] ;
	}
	sort(a , a + m) ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++ ) {
		cin >> b[i] ;
	}
	sort(b , b + n) ;
	for(int i = 0 ; i < m ; i++ ) {
		for(int j = 0 ; j < n ; j++ ) {
			if(a[i] == b[j] || a[i] == b[j] + 1 || a[i] + 1 == b[j] ) {
				ans++ ;
				a[i] = w ;
				b[j] = q ;
				w-- ;
				q-- ;
				break ;
			}
		}
	}
	cout << ans ;
}