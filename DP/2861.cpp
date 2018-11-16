#include<bits/stdc++.h>
using namespace std;

long long int MOD = 1e9+7;
long long int dp[2001][2001];
int main(){
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		dp[0][i] = 1;
	}
	for(int i = 1; i < k; i++){
		for(int j = 1; j <= n; j++){
			for(int k = 1; k <= sqrt(j); k++){
				if(j%k == 0){
					dp[i][j] += dp[i-1][k];
					dp[i][j] %= MOD;
					if(k != j/k){
						dp[i][j] += dp[i-1][j/k];
						dp[i][j] %= MOD;
					}
				}
			}
		}
	}
	long long int ans = 0;
	for(int i = 1; i <= n; i++){
		ans += dp[k-1][i];
		ans %= MOD;
	}
	cout << ans << "\n";
	return 0;
}