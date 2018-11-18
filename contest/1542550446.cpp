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
	bitset<16> a;
	a.reset();
	int c;
	for (int i = 0; i < n; ++i) {
		int num = 0;
		for (int j = 0; j < k; ++j) {
			cin >> c;
			num |= (c << (k - j - 1));
		}
		a.set(num);
		//cout << num << endl;
	}
	int f = (2 << (k - 1)) - 1;
	for (int i = 0; i < 16; ++i) {
		if (a[i])
			for (int j = i; j < 16; ++j) {
				if (a[j] && ((i & j) == 0)) {
					cout << "YES" << endl;
					return 0;
				}
			}
	}
	cout << "NO" << endl;
	return 0;

}
