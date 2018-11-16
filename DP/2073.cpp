#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100 * 1000 + 10;
int a[MAX_N], dp[MAX_N];
bool mark[MAX_N];

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = n - 1; i >= 0; i--) {
		dp[i] = dp[i + 1];
		if (!mark[a[i]])
			dp[i]++;
		mark[a[i]] = true;
	}
	for (int i = 0; i < m; i++) {
		int l;
		cin >> l;
		cout << dp[l - 1] << endl;
	}
}
