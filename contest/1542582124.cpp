#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5 ;
#define int long long int 

signed main() {
	cin.tie(NULL) ; 
	cout.tie(NULL) ; 
	ios::sync_with_stdio(0) ; 
	string a ; cin >> a ; 
	int n ; cin >> n;
	char act[MAX] ; 
	int size = 0 ; 
	string str[n+1] ; 
	for ( int i=0; i<n; ++i ) {
		cin >> str[i] ; 
		if ( str[i][0] == a[0] && str[i][1] == a[1] ) {
			cout << "YES\n" ;
			return 0 ; 
		}
	}
	for ( int i=0; i<n; ++i ) {
		if ( a[0] == str[i][1] ) {
			for ( int j=0; j<n; ++j ) {
				if ( a[1] == str[j][0] ) {
					cout << "YES\n" ; 
					return 0 ; 
				}
			}
			break ; 
		}
	}
	cout << "NO\n" ; 
	return 0 ; 
}