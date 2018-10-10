/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10 * 1000 * 1000 + 10;
int cnt[MAX_N], dp[MAX_N];
bool prime[MAX_N];

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x]++;
	}

	memset(prime, true, sizeof prime);
	prime[0] = prime[1] = false;
	for (int i = 1; i < MAX_N; i++) {
		dp[i] = dp[i - 1];
		if (prime[i])
			for (int j = i; j < MAX_N; j += i)
				prime[j] = false, dp[i] += cnt[j];
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		r = min(r, MAX_N - 1), l--;
		cout << (r > l? dp[r] - dp[l]: 0) << endl;
	}

	return 0;
}
