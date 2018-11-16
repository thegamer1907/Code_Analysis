#include <bits/stdc++.h>

using namespace std;

string s;
int n;
int q;
int l, r;
int dp[100005];

signed main() {
	cin >> s;
	n = s.length();
	s = '@' + s;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i-1];
		if (s[i] == s[i-1]) {
			dp[i]++;
		}
	}
	scanf("%d", &q);
	for (int i = 1; i <= q; i ++) {
		scanf("%d%d", &l, &r);
		cout << dp[r] - dp[l] << '\n';
	}
}