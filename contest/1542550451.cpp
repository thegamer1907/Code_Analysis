#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	int a[n][k];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < k; ++j) {
			cin >> a[i][j];
		}
	}
	if (k == 1) {
		for (int i = 0; i < n; ++i) {
			if (a[i][0] == 0) {
				cout << "YES" << endl;
				return 0;
			}
		}
		cout << "NO" << endl;
		return 0;
	} else if (k == 2) {
		bool a1 = 0, a2 = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i][0] == 0 && a[i][1] == 0) {
				cout << "YES" << endl;
				return 0;
			}
			if (a[i][0] == 0) {
				a1 = 1;
			}
			if (a[i][1] == 0) {
				a2 = 1;
			}
			if (a1 && a2) {
				cout << "YES" << endl;
				return 0;
			}
		}
		cout << "NO" << endl;
		return 0;
	} else if (k == 3) {
		bool a1 = 0, a2 = 0, a3 = 0;
		bool b1 = 0, b2 = 0, b3 = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0) {
				cout << "YES" << endl;
				return 0;
			}
			if (a[i][0] == 0) {
				a1 = 1;
			}
			if (a[i][1] == 0) {
				a2 = 1;
			}
			if (a[i][2] == 0) {
				a3 = 1;
			}
			if (a[i][0] == 0 && a[i][1] == 0) {
				b3 = 1;
			}
			if (a[i][2] == 0 && a[i][1] == 0) {
				b1 = 1;
			}
			if (a[i][0] == 0 && a[i][2] == 0) {
				b2 = 1;
			}
			if (a1 && b1) {
				cout << "YES" << endl;
				return 0;
			}
			if (a2 && b2) {
				cout << "YES" << endl;
				return 0;
			}
			if (a3 && b3) {
				cout << "YES" << endl;
				return 0;
			}
		}
		cout << "NO" << endl;
		return 0;
	} else {
		bool a1 = 0, a2 = 0, a3 = 0, a4 = 0;
		bool b1 = 0, b2 = 0, b3 = 0, b4 = 0;
		bool c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0 && a[i][3] == 0) {
				cout << "YES" << endl;
				return 0;
			}
			if (a[i][0] == 0) {
				a1 = 1;
			}
			if (a[i][1] == 0) {
				a2 = 1;
			}
			if (a[i][2] == 0) {
				a3 = 1;
			}
			if (a[i][3] == 0) {
				a4 = 1;
			}
			if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0) {
				b4 = 1;
			}
			if (a[i][0] == 0 && a[i][1] == 0 && a[i][3] == 0) {
				b3 = 1;
			}
			if (a[i][0] == 0 && a[i][3] == 0 && a[i][2] == 0) {
				b2 = 1;
			}
			if (a[i][3] == 0 && a[i][1] == 0 && a[i][2] == 0) {
				b1 = 1;
			}
			if (a1 && b1) {
				cout << "YES" << endl;
				return 0;
			}
			if (a2 && b2) {
				cout << "YES" << endl;
				return 0;
			}
			if (a3 && b3) {
				cout << "YES" << endl;
				return 0;
			}
			if (a4 && b4) {
				cout << "YES" << endl;
				return 0;
			}
			if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 1 && a[i][3] == 1) {
				c1 = 1;
			}
			if (a[i][0] == 0 && a[i][2] == 0 && a[i][1] == 1 && a[i][3] == 1) {
				c2 = 1;
			}
			if (a[i][0] == 0 && a[i][3] == 0 && a[i][1] == 1 && a[i][2] == 1) {
				c3 = 1;
			}
			if (a[i][1] == 0 && a[i][2] == 0 && a[i][0] == 1 && a[i][3] == 1) {
				c4 = 1;
			}
			if (a[i][1] == 0 && a[i][3] == 0 && a[i][0] == 1 && a[i][2] == 1) {
				c5 = 1;
			}
			if (a[i][2] == 0 && a[i][3] == 0 && a[i][0] == 1 && a[i][1] == 1) {
				c6 = 1;
			}
			if (c1 && c6) {
				cout << "YES" << endl;
				return 0;
			}
			if (c2 && c5) {
				cout << "YES" << endl;
				return 0;
			}
			if (c3 && c4) {
				cout << "YES" << endl;
				return 0;
			}
		}
		cout << "NO" << endl;
		return 0;
	}
}
