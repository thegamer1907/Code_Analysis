#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k, dp[2500][2500];

ll Calc(int i, int cnt) {
    if(cnt == k) return 1;
    
    ll &ret = dp[i][cnt]; 
    if(ret != -1) return ret;
    
    ret = 0;
    for(int j = 1; j <= n; j++) {
        if(j * i > n) break; 
        ret += Calc(i*j, cnt+1);
    }
    
    return ret % 1000000007;
}

int main() { 
    cin >> n >> k;
    memset(dp, 0, sizeof dp);
	
	
	//base case
	for(int i=0; i<=n; i++) dp[i][k] = 1; 
	
	for(int i=n; i>=1; i--) {
		for(int cnt=k - 1; cnt >= 0; cnt--) {
			for(int j=1; j<=n; j++) {
				if (j * i > n) break;
				dp[i][cnt] += dp[i * j][cnt + 1];
			}
			dp[i][cnt] %= 1000000007;
		}
	}
	
	
    cout << dp[1][0]  << endl;
    
    return 0; 
} 