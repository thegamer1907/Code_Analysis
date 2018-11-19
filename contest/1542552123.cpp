#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#define rep(i, a, b) for (int i = (a), _ = (b); i <= _; ++ i)
#define per(i, a, b) for (int i = (a), _ = (b); i >= _; -- i)
#define For(i, a, b) for (int i = (a), _ = (b); i < _; ++ i)
#define ri rd<int>
using namespace std;

template<class T> inline T rd() {
	bool f = 1; char c = getchar(); for (; !isdigit(c); c = getchar()) if (c == '-') f = 0;
	T x = 0; for (; isdigit(c); c = getchar()) x = x * 10 + c - 48; return f ? x : -x;
}

int h, m, s, u, v;
bool c1, c2;

int main() {
#ifndef ONLINE_JUDGE
	freopen("b.in", "r", stdin);
#endif

	h = ri(), m = ri(), s = ri();
	u = ri(), v = ri();

	if (u > v) swap(u, v); 

	if (u <= h && (h < v || (h == v && m == 0 && s == 0))) c1 ++; else c2 ++;
	u *= 5, v *= 5;
	if (u <= m && (m < v || (m == v && s == 0))) c1 ++; else c2++;
	if (u <= s && s <= v) c1 ++; else c2 ++;

	if (c1 && c2) puts("NO");
	else puts("YES");

	return 0;
}
