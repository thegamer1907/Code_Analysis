#include <bits/stdc++.h>
using namespace std;

const int N = 505050;

inline char get(void) {
	static char buf[100000], *S = buf, *T = buf;
	if (S == T) {
		T = (S = buf) + fread(buf, 1, 100000, stdin);
		if (S == T) return EOF;
	}
	return *S++;
}
inline void read(int &x) {
	static char c; x = 0;
	for (c = get(); c < '0' || c > '9'; c = get());
	for (; c >= '0' && c <= '9'; c = get()) x = x * 10 + c - '0';
}

int n, k, x, lim;
int a[N], b[N], c[N];
int e[N], d[N];

inline void Check(void) {
	int f = 0;
	for (int i = 0; i <= lim; i++) f |= c[i];
	if (!f) return;
	for (int j = 0; j < k; j++)
		d[j] = e[j] = 0;
	for (int i = 0; i <= lim; i++)
		if (c[i]) for (int j = 0; j < k; j++) {
			if ((i >> j) & 1) ++d[j];
			++e[j];
		}
	for (int j = 0; j < k; j++)
		if (d[j] * 2 > e[j]) return;
	puts("YES"); exit(0);
}
inline void dfs(int pos) {
	if (pos > lim) return Check();
	if (!b[pos]) return dfs(pos + 1);
	c[pos] = 1; dfs(pos + 1);
	c[pos] = 0; dfs(pos + 1);
}

int main(void) {
	read(n); read(k);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			read(x); a[i] = a[i] << 1 | x;
		}
		b[a[i]]++;
		lim = max(a[i], lim);
	}
	
	dfs(0);
	puts("NO");
	return 0;
}