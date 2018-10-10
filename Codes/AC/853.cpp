#include<bits/stdc++.h>
using namespace std ;
typedef pair<int,long long> pii ;

const int N = 1e5 + 2 ;
const int INF = 1e9 + 7 ;

pii get( long long k ) {
	int i = 1 ;
	long long len = 1 ;
	for( ; len <= k ; i ++ , len = 2*len + 1 ) ;
	return { i , len } ;
}

int solve( long long k , long long len , int num ) {
	long long me = ( len + 1 ) >> 1 ;
	if( k == me ) return num ;
	if( k < me ) return solve( k , len/2 , num - 1 ) ;
	return solve( k - len/2 - 1 , len/2 , num - 1 ) ;	
}

int main() {
	int n ;
	long long k ;
	cin >> n >> k ;
	pii p = get( k ) ;
	cout << solve( k , p.second , p.first ) ;
	
	return 0 ;
}
