 /*
	created by scarlyw
*/
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <cctype>
#include <vector>
#include <set>
#include <queue>

inline char read() {
	static const int IN_LEN = 1024 * 1024;
	static char buf[IN_LEN], *s, *t;
	if (s == t) {
		t = (s = buf) + fread(buf, 1, IN_LEN, stdin);
		if (s == t) return -1;
	}
	return *s++;
}

///*
template<class T>
inline void R(T &x) {
	static char c;
	static bool iosig;
	for (c = read(), iosig = false; !isdigit(c); c = read()) {
		if (c == -1) return ;
		if (c == '-') iosig = true;	
	}
	for (x = 0; isdigit(c); c = read()) 
		x = ((x << 2) + x << 1) + (c ^ '0');
	if (iosig) x = -x;
}
//*/

const int OUT_LEN = 1024 * 1024;
char obuf[OUT_LEN], *oh = obuf;
inline void write_char(char c) {
	if (oh == obuf + OUT_LEN) fwrite(obuf, 1, OUT_LEN, stdout), oh = obuf;
	*oh++ = c;
}

template<class T>
inline void W(T x) {
	static int buf[30], cnt;
	if (x == 0) write_char('0');
	else {
		if (x < 0) write_char('-'), x = -x;
		for (cnt = 0; x; x /= 10) buf[++cnt] = x % 10 + 48;
		while (cnt) write_char(buf[cnt--]);
	}
}

inline void flush() {
	fwrite(obuf, 1, oh - obuf, stdout);
}

/*
template<class T>
inline void R(T &x) {
	static char c;
	static bool iosig;
	for (c = getchar(), iosig = false; !isdigit(c); c = getchar())
		if (c == '-') iosig = true;	
	for (x = 0; isdigit(c); c = getchar()) 
		x = ((x << 2) + x << 1) + (c ^ '0');
	if (iosig) x = -x;
}
//*/

const int MAXN = 100000 + 10;

int n;
long long a[MAXN];
long long s, sum, ls;
long long c[MAXN];

inline bool check(long long k) {
	sum = 0;
	for (int i = 1; i <= n; ++i) c[i] = a[i] + k * (long long)i;
	std::nth_element(c + 1, c + k, c + n + 1);
	for (int i = 1; i <= k; ++i) sum += c[i];
	if (sum <= s) return true;
	else return false;
}

int main() {
	R(n), R(s);
	for (int i = 1; i <= n; ++i) R(a[i]);
	int l = 0, r = n + 1;
	while (l + 1 < r) {
		int mid = l + r >> 1;
		if (check(mid)) l = mid, ls = sum;
		else r = mid;
	}
	std::cout << l << " " << ls;
	return 0;
}
