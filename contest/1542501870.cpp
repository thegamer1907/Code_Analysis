#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <functional>
#include <cassert>
using namespace std;

const long long INF = 1e15;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	vector<vector<long long>> d(n + 1, vector<long long>(2, INF));
	int lcur = 1, rcur = 0;
	long long cur_ans = 0;
	vector<long long> was(n + 1);
	function<void(int, int)> make = [&](int l, int r) {
		while (lcur > l)
			cur_ans += was[a[--lcur]]++;
		while (lcur < l)
			cur_ans -= --was[a[lcur++]];
		while (r < rcur)
			cur_ans -= --was[a[rcur--]];
		while (r > rcur)
			cur_ans += was[a[++rcur]]++;
	};
	function<void(int, int, int, int)> solve = [&](int l, int r, int left, int right) {
		if (l > r)
			return;
		int m = (l + r) / 2;
		make(left, m);
		int opt = left;
		d[m][1] = cur_ans + d[left - 1][0];
		for (int i = left + 1; i <= min(m, right); i++) {
			make(i, m);
			if (d[i - 1][0] + cur_ans < d[m][1]) {
				d[m][1] = min(d[m][1], d[i - 1][0] + cur_ans);
				opt = i;
			}
		}
		if (l == r)
			return;
		solve(l, m - 1, left, opt);
		solve(m + 1, r, opt, right);
	};
	d[0][0] = 0;
	for (int i = 1; i <= k; i++) {
		solve(1, n, 1, n);
		for (int i = 0; i <= n; i++) {
			d[i][0] = d[i][1];
			d[i][1] = INF;
		}
	}
	cout << d[n][0] << endl;
//	system("pause");
}