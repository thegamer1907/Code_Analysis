#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define F first
#define S second
#define ld long double
#define int long long

using namespace std;

const int MAXN = 333 , K = 15 , MOD = 1e9 + 7 ; 


string pre[333] , suf[333] ; 

set<int> t[MAXN][K] ; 


int32_t main() 
{
 	ios::sync_with_stdio(0) ; 
	cin.tie(0) ;
	int n ; 
	cin >> n ; 
	for(int i = 0 ; i < n ; i ++ ) 
	{
		string s ; 
		cin >> s ;
		int m = s.size() ; 
		for(int i = 0 ; i < m ; i ++ ) s[i] -= '0' ; 
		for(int j = 0 ; j < m ; j ++ ) 
		{
			int val = 0 ; 
			for(int k = j ; k < m ; k ++ ) 
				if(k-j+1<K)val = 2 * val + s[k] , t[i][k-j+1].insert(val) ; 
		}
		for(int w = 0 ; w < min(m,K) ; w ++ ) pre[i] += s[w] , suf[i] += s[m-w-1] ; 
		reverse(suf[i].begin(),suf[i].end()) ; 
		t[i][0].insert(0) ; 
	}
	int m ; 
	cin >> m ; 
	for(int i = n ; i < n + m ; i ++ ) 
	{
		int id = i ; 
		int x , y ; 
		cin >> x >> y ; 
		x -- , y -- ;
		string q = pre[x] + pre[y] , w = suf[x] + suf[y] ; 
		pre[id] = suf[id] = "" ; 
		int k = q.size() ; 
		for(int i = 0 ; i < min(K,k) ; i ++ ) 
			pre[id] += q[i] ; 
		k = w.size() ; 
		for(int i = 0 ; i < min(K,k) ; i ++ ) 
			suf[id] += w[k-i-1] ; 
		reverse(suf[i].begin(),suf[i].end()) ; 
		for(int w = 0 ; w < K ; w ++ ) 
		{
			for(auto u : t[x][w]) t[i][w].insert(u) ; 
			for(auto u : t[y][w]) t[i][w].insert(u) ; 
		}
	
		int l = suf[x].size() , r = pre[y].size() ; 
		int v = 0 ; 
		id = i ; 
		for(int i = l - 1 ; i > -1 ; i -- ) 
		{
			int v = 0 ; 
			for(int j = i ; j < l ; j ++ ) 
				v = 2 * v + suf[x][j] ;
			int val = v ; 
			for(int j = 0 ; j < r ; j ++ ) 
			{
				val = 2 * val + pre[y][j] ; 
				if(j+1+l-i<K)t[id][j+1+l-i].insert(val) ; 
			}
		}
		int ans = 1 ;
		while(ans<K&&t[i][ans].size()==(1<<ans))
			ans ++ ; 
	
		cout << ans - 1 << '\n' ;
	}
	return 0;
}
