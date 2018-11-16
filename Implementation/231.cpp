#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("abm,popcnt,mmx,avx,sse,sse2,sse3,ssse3,sse4")
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <cstdio>
using namespace std;
#define x first
#define y second
#define pb push_back
void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	--a;
	--b;
	a += n;
	b += n;
	int x = 0;
	while (a != b) {
		++x;
		a /= 2;
		b /= 2;
	}
	if ((1 << x) == n)
		cout << "Final!";
	else
		cout << x;
	return;
}
signed main() {
	//freopen("A.in", "r", stdin);
	//freopen("A.out", "w", stdout);
	ios_base::sync_with_stdio(false);

	solve();

	return 0;
}