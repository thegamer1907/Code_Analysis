#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
ll MAX_N = 2100 ;
vector < ll > g[2100] ;
//bool mark[MAX_N] ;
ll maxx = -1 , u , depth[2100] ;
void dfs ( ll v ){
	for ( ll i = 0 ; i < g[v].size() ; i++ ){
		u = g[v][i] ;
		depth[u] = max ( depth[v] + 1 , depth[u] ) ;
		dfs(u) ;
	}
}
int main ()
{
	vector < ll > ans ;
	ll n , v ;
	cin >> n ;
	for ( ll i = 1 ; i <= n ; i++ ){
		cin >> v ;
		if ( v != -1 ){
			g[v].push_back(i) ;
		}
		else{
			depth[i] = 1 ;
			ans.push_back(i) ;
		}
	}
	for ( ll i = 0 ; i < ans.size() ; i++ ){
//		if ( !mark[i] )
			dfs(ans[i]) ;
	}	
	for ( ll i = 1 ; i <= n ; i++ )
		maxx = max ( maxx , depth[i] ) ;
	return cout << maxx , 0 ; 
}
