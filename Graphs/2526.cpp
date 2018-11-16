// NullByte.CodeShare
// There'is No PLace Like 127.0.0.1
#include <iostream>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <stdio.h>
#include <time.h>
#include <unordered_map>
using namespace std ;
// Template
typedef long long ll ;
typedef long double ld ;
const ll INF = 1e9 ;
const ll MAXN = 1e4 + 69 ;
const ll MOD = 1e9 + 7 ;
#define _Sync ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define _File freopen ( "input.txt" , "r" , stdin ) ; freopen ( "output.txt" , "w" , stdout ) ;
#define _End return cout << '\n' , 0 ;
#define fastmax(x, y) (((x - y) >> 31) & (x ^ y)) ^ x
#define pie pair<ll , ll>
#define sp setprecision
#define in insert
#define pb push_back
#define mp make_pair
#define X first
#define Y second
// Code
int n , ans , par[MAXN] , col[MAXN] ;
bool mark[MAXN] ;
vector <int> g[MAXN] ;
void Add_Edge(int v , int u) {
	g[v].pb(u) ;
	g[u].pb(v) ;
}
int bfs(int v) {
	queue <int> q ;
	q.push(v) , mark[v] = true ; 
	while ( q.size() ) {
		v = q.front() , q.pop() ;
		for ( auto u : g[v] )
			if ( !mark[u] )
				par[u] = v , mark[v] = true , q.push(u) ;
	}
}
int main(){
	_Sync
	// Begin Main Code
	int v ;
	cin >> n ;
	for ( int i = 1 ; i < n ; i ++ )
		cin >> v , Add_Edge(v , i + 1) ;
	for ( int i = 1 ; i <= n ; i ++ )
		cin >> col[i] ;
	bfs(1) ;
	for ( int i = 2 ; i <= n ; i ++ )
		if ( col[par[i]] != col[i] ) 
			ans ++ ;
	cout << ans + 1 ;
	// End Main Code
	_End
}
