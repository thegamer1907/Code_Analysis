#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0);
#define all(x) (x).begin(), (x).end()
 
#define INF 2147483647
#define MAXN 2004
 
ll mod = 1000000007;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	_cin;
	ll n, m, k;
	cin >> n >> m >> k;
	ll lo = 1, hi = n*m, mid, ct, ans = 0;
	while(lo <= hi){
		mid = (lo + hi)/2;
		ct = 0;
		for(int i=1; i<=n; i++){
			ct += min(m, (mid-1)/i);
		}
		if(ct < k){
			ans = max(ans, mid);
			lo = mid+1;
		}
		else{
			hi = mid-1;
		}
	}
	cout << ans << endl;
	return 0;
}