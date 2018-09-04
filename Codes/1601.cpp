#include <bits/stdc++.h>
using namespace std;

int n, s, a[100100];

inline long long getMinCost(int k) {
	long long cost = 0;
	multiset<long long> items;
	for (int i = 1; i <= n; ++i) {
		items.insert(a[i] + i * 1LL * k);
	}
	while (k--) {
		cost += *items.begin();
		items.erase(items.begin());
		if (cost > s) return cost;
	}
	return cost;
}

int main() {
	cin >> n >> s;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", a + i);
	}
	
	int l = 0, r = n, mid;

	while (l < r) {
		mid = (l + r + 1) / 2;

		if (getMinCost(mid) <= s)
			l = mid;
		else
			r = mid - 1;
	}

	cout << r << ' ' << getMinCost(r) << endl;
	return 0;
}