#include <bits/stdc++.h>

typedef long long ll;

#define forn(i, n) for (int i = 0; i < n; ++i)
#define x first
#define y second
#define point pair<int, int>

using namespace std;

const int N = 1e5 + 3, BIG = 1e9 + 7, MOD = 1e9 + 7, P = 'z' - 'a' + 1;




int main() {
	// freopen("a.in", "r", stdin), freopen("a.out", "w", stdout);
	ios_base:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, a, b, k = 0;
	cin >> n >> a >> b;
	--a, --b;
	while (a != b) {
		a /= 2;
		b /= 2;
		++k;
	}
	// cout << k << "  -k\n";
	if ((1 << k) == n) {
		cout << "Final!";
		return 0;
	}
	cout << k;
	return 0;
}
