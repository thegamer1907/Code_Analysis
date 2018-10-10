#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <sstream>
using namespace std;
#define MAXN 100100
long long l, r, m, n, s, a[MAXN], x[MAXN];
long long ok(long long k) {
	for (long long i = 1; i <= n; ++i)x[i] = a[i] + i * k;
	sort(x + 1, x + 1 + n);
	long long sum = 0;
	for (long long i = 1; i <= k; ++i)sum += x[i];
	return sum <= s ? sum : 0;
}
int main() {
	cin >> n >> s, r = n;
	for (int i = 1; i <= n; ++i)cin >> a[i];
	while (l < r) {
		m = (l + r + 1) / 2;
		if (ok(m))l = m;
		else r = m - 1;
	}
	cout << l << " " << ok(l);
}
