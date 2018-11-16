#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	cin >> s;
	int len = (int) s.size();
	vector<int> pre(len);

	for (int i = 1; i < len; i++) {
		pre[i] = pre[i - 1] + (s[i] == s[i - 1]);
	}
	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << pre[r - 1] - pre[l - 1] << '\n';
	}
	
 	return 0;
}