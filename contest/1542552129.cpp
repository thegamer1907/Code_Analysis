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

int n;
char s[4], t[4];
bool ok = 0, bg = 0, ed = 0;

int main() {

	scanf("%s", s+1);

	n = ri();

	rep (i, 1, n) {
		scanf("%s", t+1);
		if (t[1] == s[1] && t[2] == s[2]) ok = 1;
		if (t[2] == s[1]) bg = 1;
		if (t[1] == s[2]) ed = 1;
	}

	puts( (ok || (bg && ed)) ? "YES" : "NO");

	return 0;
}
