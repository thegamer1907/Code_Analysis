// http://codeforces.com/problemset/problem/313/B?locale=en
/*

The program copmutes the prefix sums of an array having A[i] = 1 iff
s[i] = s[i+1], else A[i] = 0.
The answer of a query is simply the sum of A from l (included) to r (excluded),
that is the difference of prefixsums[r] - prefixsums[l].

Space complexity is Theta(n), time complexity is Theta(n + m) (the prefix sums
are computed in linear time, and so are the queries).

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	int prefsums[n] = {0};
	for (int i = 0; i + 1 < n; ++i) {
		prefsums[i + 1] = prefsums[i] + (s[i] == s[i + 1] ? 1 : 0);
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int l, r;
		cin >> l >> r;
		// Indexes are 1-based
		--l;
		--r;
		cout << prefsums[r] - prefsums[l] << endl;
	}
	return 0;
}
