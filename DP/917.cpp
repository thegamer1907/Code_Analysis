#include <bits/stdc++.h>

using namespace std;

int n;
int dp[102][2];
bitset<102> a;

signed main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int x;
		scanf("%d", &x);
		a[i] = x;
		dp[i][a[i]] = dp[i-1][a[i]]+1;
		dp[i][1^a[i]] = dp[i-1][1^a[i]];
	}		
	int res = -1;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			res = max(res, dp[n][1] - dp[j][1] + dp[i-1][1] + dp[j][0] - dp[i-1][0]);
		}
	}
	cout << res;
}