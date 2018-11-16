#include <bits/stdc++.h>

using namespace std;

#define bp __builtin_popcountll
#define b_clz __builtin_clzll
#define b_ctz __builtin_ctzll
#define pb push_back

typedef long long llong;
typedef long double ldouble;
typedef unsigned long long ullong;

const int MXN = 1e6 + 1;
const int MNN = 1e3 + 1;
const int INF = 1e9;
const llong LINF = 1e17;
const llong MOD = 1e9 + 7;

llong log2 (llong x) {return 64 - b_clz (x) - 1;};
llong loga (llong a, llong n) {return log (n) * 1.00 / log (a);};
llong __lcm (llong x, llong y) {return x / __gcd (x, y) * y;};

int n, x, y;

int main () {
	//freopen ("input.txt", "r", stdin);
	cin >> n >> x >> y;
	-- x;
	-- y;
	for (int i = 1; i < log2 (n); ++ i) {
		if (x / (1 << i) == y / (1 << i)) {
			cout << i;
			return 0;
		}
	}
	cout << "Final!";
	return 0;
}