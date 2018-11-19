#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define F first
#define S second
#define ld long double
#define int long long

using namespace std;

const int MAXN = 101 * 1001 , K = 22 , MOD = 1e9 + 7 ; 

int a[MAXN] ; 

int dp[MAXN][K] ; 

int cnt[MAXN] ;

int n ; 

int ans ; 

inline void add(int x)
{
	ans += cnt[x] ; 
	cnt[x] ++ ;
}

inline void erase(int x)
{
	cnt[x] -- ; 
	ans -= cnt[x] ; 
}

void solve(int l , int r , int s , int e , int le )
{
	if(r<=l) return ;
	int mid = (r+l) / 2 ; 
	for(int i = l ; i <= mid ; i ++ ) add(a[i]) ; 

	pair<int,int> p = {dp[s-1][le-1]+ans,s} ; 

	for(int i = s + 1 ; i < min(e,mid+1) ; i ++ )
	{	
		erase(a[i-1]) ; 
		p = min(p,{dp[i-1][le-1]+ans,i}) ; 
	}
	for(int i = s ; i < min(e,mid+1) - 1 ; i ++ ) 
		add(a[i]) ; 
	
	for(int i = mid ; i >= l ; i -- ) erase(a[i]) ; 
	
	dp[mid][le] = p.F ; 

	if(r-l==1) return ; 
	int ind = p.S ; 
	solve(l,mid,s,min(n,ind+1),le) ; 
	ind = max(le-1,ind-1) ; 
	for(int i = l ; i <= mid ; i ++ ) add(a[i]) ;  
	for(int i = s ; i < ind ; i ++ ) erase(a[i]) ; 
	solve(mid+1,r,ind,e,le) ; 
	for(int i = s ; i < ind ; i ++ ) add(a[i]); 
	for(int i = l ; i <= mid ; i ++ ) erase(a[i])  ; 
}

int32_t main() 
{
 	ios::sync_with_stdio(0) ; 
	cin.tie(0) ;
    int k ; 	
	cin >> n >> k  ;  
	for(int i = 0 ; i < n ; i ++ ) cin >> a[i] ; 
	memset(dp,63,sizeof dp) ; 
	for(int i = 0 ; i < n ; i ++ ) add(a[i]) , dp[i][1] = ans ; 
	for(int i = 2 ; i <= k ; i ++ ) 
	{
		memset(cnt,0,sizeof cnt) ; 
		ans = 0 ; 
		solve(i-1,n,i-1,n,i) ; 
	}
	cout << dp[n-1][k] << endl ; 
	return 0;
}
