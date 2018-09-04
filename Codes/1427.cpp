#include <bits/stdc++.h>
using namespace std;

long long minCost(int k, const vector<int> &a) {
	vector<long long> cost(a.size());
	for (int i = 0; i < a.size(); ++i)
		cost[i] = a[i] + (i + 1LL) * k;
	sort(cost.begin(), cost.end());
	long long ans = 0LL;
	for (int i = 0; i < k; ++i)
		ans += cost[i];
	return ans;
}

int main() {
	int n, s;
	cin >> n >> s;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int l = 0, r = n;
	while(l <= r) {
		int m = (l + r) / 2;
		if (minCost(m, a) <= s) {
			if (m == n || minCost(m + 1, a) > s) {
				cout << m << " " << minCost(m, a);
				return 0;
			}
			else
				l = m + 1;
		}
		else
			r = m - 1;
	}
	assert(false);
}
