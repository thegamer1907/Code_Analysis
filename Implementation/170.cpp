#include <bits/stdc++.h>


using namespace std;

#define ll long long
#define null NULL
#define ld long double
#define left left228
#define right right228
#define index index228
#define prev prev228


inline void chkmax(int &x, int y) {
	if (y > x) x = y;
}

inline void chkmin(int &x, int y) {
	if (y < x) x = y;
}


signed main() {
	ios_base::sync_with_stdio(false);
	int n, a, b;
	cin >> n >> a >> b;
	if (a > b) swap(a, b);
	int mid = n >> 1;
	if (a <= mid && b > mid) {
		puts("Final!");
		return 0;
	}
	int fin = log2(n);
	int kek = n / 2;
	while (kek > 0) {
		for (int i = 1; kek * i <= n; ++i) {
			int pos = i * kek;
			if (a <= pos && pos < b) {
				cout << fin << endl;
				return 0;
			}
		}
		--fin;
		kek >>= 1;
	}
    return 0;
}
