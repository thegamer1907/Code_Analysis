#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int maxn = 10000100;

int p[maxn];

set<int> fac(int x) {
	set<int> ret;
	while (p[x]) {
		ret.insert(p[x]);
		x /= p[x];
	}
	if (x > 1) ret.insert(x);
	return ret;
}

ll tot[maxn];

int main() {
	for (int i = 2; i < maxn; i++) {
		if (!p[i]) {
			for (int j = i + i; j < maxn; j += i) {
				p[j] = i;
			}
		}
	}
	
	ios::sync_with_stdio(false);
	int n; cin >> n;
	
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		for (int p : fac(x)) {
			tot[p]++;
		}
	}
	
	for (int i = 3; i < maxn; i++) {
		tot[i] += tot[i - 1];
	}
	
	int m; cin >> m;
	while (m--) {
		int l, r; cin >> l >> r;
		l = min(l, 10000000);
		r = min(r, 10000000);
		cout << tot[r] - tot[l - 1] << endl;
	}
	return 0;
}