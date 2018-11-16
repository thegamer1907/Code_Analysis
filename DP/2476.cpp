#include <cstdio>
const int maxn = 1e5 + 10, mod = 1e9 + 7;
int dp[maxn], sum[maxn];
int main() {
	int n, k, l, r;
	scanf("%d %d", &n, &k);
	sum[0] = 0;
	for(int i = 0 ; i <= maxn ; ++ i) dp[i] = 1;
	for(int i = k ; i <= maxn ; ++ i) dp[i] = (dp[i - 1] + dp[i - k]) % mod;
	for(int i = 1 ; i <= maxn ; ++ i) sum[i] = (sum[i - 1] + dp[i]) % mod;
	for(int i = 1 ; i <= n ; ++ i) {
		scanf("%d %d", &l, &r);
		printf("%d\n", (sum[r] - sum[l - 1] + mod) % mod);
	}
	return 0;
}