#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100 * 1000 + 10, MOD = 1e9 + 7;
int dp[MAX_N];

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, k;
	cin >> t >> k;
	dp[0] = 1;
	for (int i = 1; i < MAX_N; i++)
		dp[i] = (dp[i - 1] + (i >= k? dp[i - k]: 0)) % MOD;
	for (int i = 1; i < MAX_N; i++)
		(dp[i] += dp[i - 1]) %= MOD;
	
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		cout << (dp[b] - dp[a - 1] + MOD) % MOD << endl;
	}
}
