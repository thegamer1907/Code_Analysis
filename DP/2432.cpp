#include <bits/stdc++.h>
#define MAXN 100100
#define pii pair<int, int>
#define pb push_back
typedef long long ll;

using namespace std;

ll n, t, dp[MAXN], pre[MAXN], mod = 1000000007;

ll f(ll x){
	return pre[x];
}

int main(){
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> t;
    dp[0] = pre[0] = 1;
    for(int i = 1; i < MAXN; i++){
    	dp[i] = dp[i - 1];
    	if(i >= t){
    		dp[i] += dp[i - t];
    	}
    	dp[i] %= mod;
    	pre[i] = pre[i - 1] + dp[i];
    	pre[i] %= mod;
    }
    	//cout << dp[4] << endl;
    for(int i = 0; i < n; i++){
    	ll a, b;
    	cin >> a >> b;
    	cout << (mod + f(b) - f(a - 1)) % mod << endl;
    }
}