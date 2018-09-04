#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int b [ 1000002 ] ;
void Preprocess( string &s ){
	int i = 0 , j = -1 ;
	b [ i ] = j ;
	while ( i < s.size() ) {
		while ( j >= 0 && s [ i ] != s [ j ] ) j = b [ j ] ;
		i ++ ; j ++ ; b [ i ] = j ;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s , t ; 
	cin >> s ; 
	Preprocess(s);
	for ( int i = 1 ; i < s.size() ; i ++ ) if ( b [ i ] == b [ s.size() ] && b [ i ] > 0 ) {
		cout << s.substr(0,b[i]) << endl ;
		return 0 ;
	}
	int ans = b [ b [ s.size() ] ] ; 
	if ( ans <= 0 ) cout << "Just a legend" << endl ; 
	else cout << s.substr(0,ans) << endl ;
} 