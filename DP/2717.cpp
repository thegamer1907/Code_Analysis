#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <vector>
#include <deque>
#include <bitset>
#include <algorithm>
#include <set>
#include <iomanip>
#include <string>
#include <map>

#define rn(n) int n; cin >> n;
#define fv(i, n) for (int i = 0; i < n; i++)
#define mp(a, b) make_pair(a, b)
#define sqr(a) ((a) * (a))
using namespace std;

const long long INF = 2'000'000'007;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifdef Local_file
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	rn(n);
	vector <pair <int, int>> v;
	v.push_back({ -INF, 0 });
	fv(i, n) {
		pair <int, int> a;
		cin >> a.first >> a.second;
		v.push_back(a);
	}
	v.push_back({ INF, 0 });
	vector <int> dp[3];
	fv(i, 3)
		dp[i].resize(v.size());
	for (int i = 1; i <= n; i++) {
		dp[0][i] = max(dp[0][i - 1], max(dp[1][i - 1], dp[2][i - 1]));
		dp[1][i] = -INF;
		if (v[i].first - v[i].second > v[i - 1].first) dp[1][i] = max(dp[0][i - 1] + 1, dp[1][i - 1] + 1);
		if (v[i].first - v[i].second > v[i - 1].first + v[i - 1].second) dp[1][i] = max(dp[1][i], dp[2][i - 1] + 1);
		dp[2][i] = -INF;
		if (v[i].first + v[i].second < v[i + 1].first) dp[2][i] = dp[0][i] + 1;

	}
	cout << max(dp[0][n], max(dp[1][n], dp[2][n]));
	return 0;
}