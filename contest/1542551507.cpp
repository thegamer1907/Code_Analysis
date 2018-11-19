#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	unordered_set<int> s;
	for (int i = 0; i < n; ++i) {
		int ni = 0, d;
		for (int j = 0; j < k; ++j) cin >> d, ni = 2*ni+d;
		s.insert(ni);
	}

	if (s.count(0) > 0) { cout << "YES\n"; return 0; }
	for (int si : s) for (int sj : s) if ((si & sj) == 0) { cout << "YES\n"; return 0; }
	cout << "NO\n";
}