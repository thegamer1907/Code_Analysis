#include "bits/stdc++.h"
using namespace std;

vector<int> Z(string s) {
	int n = s.size();
	vector<int> z(n);
	int x = 0, y = 0;
	for(int i = 1; i < n; ++i) {
		z[i] = max(0, min(z[i - x], y - i + 1));
		while(i + z[i] < n and s[i + z[i]] == s[z[i]]) {
			x = i, y = i + z[i], z[i]++;
		}
	}
	return z;
}

int main() {
	string s; cin >> s;
	int n = s.size();
	vector<int> z(Z(s));

	int ans = 0;
	vector<int> d(n);
	for(int i = 1; i < n; ++i) {
		d[i] = d[i - 1];
		d[i] = max(z[i], d[i]);
	}
	for(int i = n - 1; i > 0; i--) {
		if(i + z[i] == n and d[i - 1] >= z[i]) {
			ans = max(ans, min(d[i - 1], z[i]));
		}
	}

	if(ans == 0) cout << "Just a legend\n";
	else {
		for(int i = 0; i < ans; ++i) cout << s[i];
			cout << "\n";
	}
}