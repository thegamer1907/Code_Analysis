/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
long long dp[N][2];
string s[N], t[N];
int n, c[N];

void readInput() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> c[i];
	for (int i = 1; i <= n; i++)
		cin >> s[i];
}

void solve() {
	memset(dp, 63, sizeof dp), dp[0][0] = dp[0][1] = 0;
	for (int i = 1; i <= n; i++) {
		t[i] = s[i], reverse(t[i].begin(), t[i].end());
		if (s[i - 1] <= s[i])
			dp[i][0] = min(dp[i][0], dp[i - 1][0]);
		if (t[i - 1] <= s[i])
			dp[i][0] = min(dp[i][0], dp[i - 1][1]);
		if (s[i - 1] <= t[i])
			dp[i][1] = min(dp[i][1], dp[i - 1][0] + c[i]);
		if (t[i - 1] <= t[i])
			dp[i][1] = min(dp[i][1], dp[i - 1][1] + c[i]);
	}
}

void writeOutput() {
	if (min(dp[n][0], dp[n][1]) > 1e15)
		cout << "-1\n", exit(0);
	cout << min(dp[n][0], dp[n][1]) << endl;
}

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0);
	readInput(), solve(), writeOutput();
	return 0;
}
