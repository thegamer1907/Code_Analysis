#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
	ios::sync_with_stdio(0);

	int n; cin >> n;

	int ans = INT_MAX;
	int id;

	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		x = max(x - i, 0);
		x = x / n + (x % n != 0);
		if (x < ans) {
			ans = x;
			id = i + 1;
		}
	}

	cout << id;

	return 0;
}