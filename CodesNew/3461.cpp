#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;

#define reg register
#define enter putchar('\n')
#define space putchar(' ')

typedef long long ll;

inline void chkmax(int&a, reg int b) { a = a > b ? a : b; }
inline void chkmin(int&a, reg int b) { a = a < b ? a : b; }

inline int read() {
	reg int s = 0, t = 1; reg char ch = getchar();
	while(ch > '9' || ch < '0') t *= ch == '-' ? -1 : 1, ch = getchar();
	while(ch >= '0' && ch <= '9') s = s * 10 + ch - '0', ch = getchar();
	return s * t;
}

inline void print(reg int x) {
	if(x < 0) putchar('-'), x = -x;
	if(x > 9) print(x / 10);
	putchar(x % 10 + '0');
}

int n;
int m;
int a[MAXN + 1];
int MAX;
int sum;

int main() {
	n = read(); m = read();
	for(reg int i = 1; i <= n; i++) a[i] = read(), chkmax(MAX, a[i]);
	for(reg int i = 1; i <= n; i++) sum += MAX - a[i];
	if(sum >= m) print(MAX), space, print(MAX + m), enter;
	else print((m - sum + n - 1) / n + MAX), space, print(MAX + m), enter;
	return 0;
}