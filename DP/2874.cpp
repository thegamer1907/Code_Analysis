#include <iostream>

using namespace std;
typedef long long ll;

const ll M = 1000000007;

int n, k;
ll dp[2005][2005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		dp[1][i] = 1;
	}
	for (int i = 1; i < k; ++i) {
		for (int j = 1; j <= n; ++j) {
			for (int l = j; l <= n; l += j) {
				dp[i+1][l] += dp[i][j];
				dp[i+1][l] %= M;
			}
		}
	}
	ll res = 0;
	for (int i = 1; i <= n; ++i) {
		res += dp[k][i];
	}
	res %= M;
	cout << res << "\n";
	return 0;
}