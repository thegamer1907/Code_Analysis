#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define SZ 107

int OO = 1e9;

int n, k, q[20], b;

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n >> k;
	for (int j = 0; j < n; j++) {
		int r = 0;
		for (int i = 0; i < k; i++) {
			cin >> b;
			r |= (b << i);
		}
		q[r]++;
	}
	if (q[0]) {
		cout << "YES";
		return 0;
	}
	for (int i = 0; i < (1 << k); i++)
		for (int j = 0; j < (1 << k); j++) {
			if (i & j)
				continue;
			if (q[i] && q[j]) {
				cout << "YES";
				return 0;
			}
		}
	cout << "NO";
	return 0;
}
