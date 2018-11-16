#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
const int MOD = 1000000007;
const int N = 200005;
LL dp[N];
int main() {
	int t, k;
	scanf("%d %d", &t, &k);
	dp[0] = 1;
	for (int i = 1; i < N; i++) {
		dp[i] = (dp[i-1] + ((i - k >= 0) ? dp[i-k] : 0)) % MOD;
	}
	for (int i = 1; i < N; i++) {
		dp[i] = (dp[i] + dp[i-1]) % MOD;
	}
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%lld\n", (dp[b] - dp[a-1] + MOD) % MOD);
	}
}