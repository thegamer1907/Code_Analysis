#include<cstdio>
#define MOD 1000000007

int n, k, dp[2003][2003], ans;

int main() {
	scanf("%d %d", &n, &k);
	dp[0][1] = 1;
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k * k <= j; k++) {
				if (j % k == 0) {
					if (k * k == j) {
						dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;
					} else {
						dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;
						dp[i][j] = (dp[i][j] + dp[i-1][j / k]) % MOD;
					}
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		ans = (ans + dp[k][i]) % MOD;
	}
	printf("%d\n", ans);
}