#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define MOD 1000000007

using namespace std;
typedef long long int ll;

ll dp[2002][2002];
int main(void){
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin); 
	#endif
	fast;
	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; ++i){
		dp[1][i] = 1;
	}
	for (int i = 1; i < k; ++i){
		for (int j = 1; j <= n; ++j){
			for (int l = 1; j*l <= n; ++l){
				dp[i+1][j*l] = (dp[i+1][j*l] + dp[i][j])%MOD;
			}
		}
	}
	ll ans = 0;
	for (int i = 1; i <= n; ++i){
		ans = (ans + dp[k][i])%MOD;
	}
	cout << ans;
}