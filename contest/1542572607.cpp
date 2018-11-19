#include <bits/stdc++.h>

using namespace std;

string s[123];

int main() {
	string p;
	cin >> p;
	int n;
	cin >> n;
	bool ok = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		if (s[i] == p) {
			ok = 1;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (s[i][1] == p[0]) {
			for (int j = 0; j < n; ++j) {
				if (s[j][0] == p[1]) {
					ok = 1;
					break;
				}
			}
		}
	}
	ok ? puts("YES") : puts("NO");
	return 0;
}