#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
	int n, k; cin >> n >> k;
	vi cnt(k, 0);
	unordered_set<int> s;
	for (int i = 0; i < n; ++i) {
		int p = 0;
		for (int j = 0; j < k; ++j) {
			int d; cin >> d;
			p = 2*p+d;
			cnt[j] += d;
		}
		s.insert(p);
	}

	for (int i = 0; i < k; ++i) if (cnt[i] == n) { cout << "NO" << endl; return 0; }
	if (s.find(0) != s.end()) { cout << "YES" << endl; return 0; }

	for (int si : s) for (int sj : s) if ((si & sj) == 0) { cout << "YES" << endl; return 0; }
	cout << "NO" << endl;
}