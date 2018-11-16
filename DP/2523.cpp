#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100 * 1000 + 10;
int a[MAX_N], dp[MAX_N];

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	dp[0] = 1;
	for (int i = 1; i < n; i++)
		dp[i] = a[i] > a[i - 1]? dp[i - 1] + 1: 1;
	int ans = 0;
	for (int i = 0; i < n; i++)
		ans = max(ans, dp[i]);
	cout << ans;
}
