#include <bits/stdc++.h>

using namespace std;

const int N = 500003;

int n;
string s[N];

void Solve() {
	for (int i = n - 2; i >= 0; --i) {
		for (size_t j = 0; j < s[i].length(); ++j) {
			if (j >= s[i + 1].length()) {
				s[i].resize(j);
				break;
			}
			if (s[i][j] == s[i + 1][j]) continue;
			if (s[i][j] < s[i + 1][j]) break;
			if (s[i][j] > s[i + 1][j]) s[i].resize(j);
		}
	}	
	for (int i = 0; i < n; ++i) cout << s[i] << '\n';
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> s[i];
	Solve();	
	return 0;
}