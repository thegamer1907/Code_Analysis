#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5 ;
#define int long long int 

struct NODE {
	int a , b , c , d ; 
} brr[MAX] ; 

bool cmp ( const NODE &n1 , const NODE &n2 ) {
	if ( n1.a == n2.a && n1.b == n2.b && n1.c == n2.c ) return n1.d < n2.d ; 
	else if ( n1.a == n2.a && n1.b == n2.b ) return n1.c < n2.c ; 
	else if ( n1.a == n2.a ) return n1.b < n2.b ; 
	else return n1.a < n2.a ; 
}

int c[MAX][5] ; 

signed main() {
	cin.tie(NULL) ; 
	cout.tie(NULL) ; 
	ios::sync_with_stdio(0) ; 
	int n , k; cin >> n >> k ;
	int arr[MAX][5] = {0} ; 
	for ( int i=0; i<n; ++i ) {
		int cnt = 0 ; 
		for ( int j=0; j<k; ++j ) {
			cin >> arr[i][j] ; 
			if ( arr[i][j] == 0 ) ++cnt ; 
		}
		if ( cnt == k ) {
			cout << "YES\n" ; 
			return 0 ;
		}
	}
	int size = 0 ; 
	for ( int i=0; i<n; ++i ) {
		brr[i].a = arr[i][0] ; 
		brr[i].b = arr[i][1] ; 
		brr[i].c = arr[i][2] ; 
		brr[i].d = arr[i][3] ; 
	}
	sort ( brr , brr + n , cmp ) ; 
	for ( int i=0; i<n; ++i ) {
		if ( brr[i].a == brr[i+1].a && brr[i].b == brr[i+1].b && brr[i].c == brr[i+1].c && brr[i].d == brr[i+1].d ) {
			continue ; 
		}
		c[size][0] = brr[i].a ; 
		c[size][1] = brr[i].b ; 
		c[size][2] = brr[i].c ;
		c[size][3] = brr[i].d ; 
		size++ ; 
	}
	for ( int i=0; i<size; ++i ) {
		for ( int j=0; j<size; ++j ) {
			if ( (c[i][0] + c[j][0] <= 1 && c[i][1] + c[j][1] <= 1 && c[i][2] + c[j][2] <= 1 && c[i][3] + c[j][3] <= 1 )  ) {
				cout << "YES\n" ; 
				return 0 ; 
			}
		}
	}
	cout << "NO\n" ; 
	return 0 ; 
}