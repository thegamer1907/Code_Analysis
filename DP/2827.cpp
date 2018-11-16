/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

const int P = 1000 * 1000 * 1000 + 7;
const int MAX_N = 2000 + 10;
int dp[MAX_N][MAX_N];

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		dp[i][1] = 1;
		for (int j = 1; j <= k; j++)
			for (int k = i; k <= n; k += i)
				(dp[k][j] += dp[i][j - 1]) %= P;
		(ans += dp[i][k]) %= P;
	}
	cout << ans << endl;

	return 0;
}
