#include<bits/stdc++.h>

typedef long long LL;

#define For(i, _l, _r) for (int i = (_l), i##r = (_r); i <= (i##r); ++i)
#define Lop(i, _l, _r) for (int i = (_l), i##r = (_r); i >= (i##r); --i)
#define Rep(i, _l, _r) for (int i = (_l); i; i = (_r))
#define debug(...) fprintf(stderr, __VA_ARGS__)

template <typename T> T max(T x, T y) { return (x > y)? x: y; }
template <typename T> T min(T x, T y) { return (x < y)? x: y; }
template <typename T> bool chkmax(T &x, T y) { return (x >= y)? 0: (x = y, 1); }
template <typename T> bool chkmin(T &x, T y) { return (x <= y)? 0: (x = y, 1); }

template <typename T>
T read(T &in) {
	in = 0; char c; T f = 1;
	while (!isdigit(c = getchar())) if (c == '-') f = -1;
	while (isdigit(c)) in = in * 10 + c - '0', c = getchar();
	return in *= f;
}

LL n;

bool check(LL k) {
	LL res = 0, n = ::n;
	while (n) {
		if (n <= k) return res + n >= (::n + 1) / 2;
		if (res >= (::n + 1) / 2) return 1;
		res += k, n -= k, n -= n / 10;
	}
	return res >= (::n + 1) / 2;
}

int main() {
	
	read(n);
	
	LL l = 1, r = n;
	
	while (l < r) {
		LL mid = (l + r) >> 1;
		if (check(mid)) r = mid; else l = mid + 1;
	}
	
	printf("%lld\n", l);
	
	return 0;
}