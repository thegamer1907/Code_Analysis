
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n, m, a[10000];
int read() {
	char x = getchar(); int t = 0;
	while (x<'0' || x>'9') x = getchar();
	while (x >= '0'&&x <= '9') {
		t = t * 10 + x - '0';
		x = getchar();
	}
	return t;
}
int main() {
	cin >> n >> m;
	int maxl = 0, ml = m;
	for (int i = 1; i <= n; i++) {
		a[i] = read();
		maxl = max(maxl, a[i]);
	}
	for (int i = 1; i <= n; i++) {
		m -= maxl - a[i];
		if (m <= 0) {
			cout << maxl << ' ';
			break;
		}
	}
	if (m > 0) {
		cout << (maxl + m / n + (m%n ? 1 : 0)) << ' ';
	}
	cout << maxl + ml;
	return 0;
}