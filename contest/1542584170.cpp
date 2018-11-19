#include <bits/stdc++.h>

using namespace std;

const int size = 1 << 5;
const int INF = 1e9;

int co[size];

int main() {
	//freopen("input.in", "r", stdin);
	//freopen("output.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int el = 0;
		for (int j = 0; j < k; j++) {
			int t;
			cin >> t;
			el = el * 2 + t;
		}
		co[el]++;

	}
	for (int i = 0; i < (1 << k); i++) {
		if (co[i] == 0) continue;
		for (int j = 0; j < (1 << k); j++) {
			if (co[j] == 0) continue;
			if ((i & (~j)) >= i) {
				cout << "yes";
				return 0;
			}
		}
	}
	cout << "no";

	return 0;
}