#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define mp make_pair
#define f first
#define s second

int a, b, n;

int main() {
	cin >> n >> a >> b;
	a--;
	b--;
	for (int i = 1; (1 << i) < n; ++i) {
		int block = (1 << i);
		int as = a / block;
		int bs = b / block;
		if (as == bs) {
			cout << i << endl;
			return 0;
		}
	}
	cout << "Final!" << endl;
	return 0;
}