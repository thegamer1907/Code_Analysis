/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

const int N = 5000 + 5;
long long dp[N][N], sum[N];

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		sum[i] = sum[i - 1] + x;
	}

	memset(dp, -63, sizeof dp);
	for (int i = 0; i <= n; i++) {
		dp[i][0] = 0;
		for (int j = 1; j * m <= i; j++)
			dp[i][j] = max(dp[i - 1][j], sum[i] - sum[i - m] + dp[i - m][j - 1]);
	}
	cout << dp[n][k] << endl;

	return 0;
}
