#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e5+69;
string t[MAXN];
int n,m;
int main() {
	cin.sync_with_stdio(0);
	cin.tie();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	for (int i = n-2; i >= 0; i--) {
		int ms = min(t[i].size(), t[i+1].size());
		for (int j = 1; j < ms; j++) {
			if (t[i][j] != t[i+1][j]) {
				if (t[i][j] > t[i+1][j])
					t[i] = t[i].substr(0, j);
				break;
			}
		}
		if (t[i] > t[i+1]) {
			t[i] = t[i].substr(0, t[i+1].size());
		}

	}
	for (int i = 0; i < n; i++) {
		cout << t[i] << endl;
	}
}