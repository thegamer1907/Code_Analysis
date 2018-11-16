#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n, m, i, j, k, q, a, b, aa, bb, ans, ss;
	cin >> n >> m;
	vector<string> s(n);
	for (i = 0; i < n; i++) cin >> s[i];
	vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
	vector<vector<long long>> v(n + 1, vector<long long>(m + 1, 0));
	vector<vector<long long>> h(n + 1, vector<long long>(m + 1, 0));

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
			if (s[i - 1][j - 1] == '.') {
				if ((j >= 2) && (s[i - 1][j - 2] == '.')) dp[i][j]++, h[i][j]++;
				if ((i >= 2) && (s[i - 2][j - 1] == '.')) dp[i][j]++, v[i][j]++;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		ss = 0;
		for (j = 1; j <= m; j++) {
			ss += v[i][j];
			v[i][j] = ss;
		}
	}

	for (j = 1; j <= m; j++) {
		ss = 0;
		for (i = 1; i <= n; i++) {
			ss += h[i][j];
			h[i][j] = ss;
		}
	}

	cin >> q;
	while (q--) {
		cin >> a >> b >> aa >> bb;
		ans = dp[aa][bb] - dp[a - 1][bb] - dp[aa][b - 1] + dp[a - 1][b - 1];
		ans -= v[a][bb] - v[a][b - 1];
		ans -= h[aa][b] - h[a - 1][b];
		cout << ans << "\n";
	}


	return 0;
}
