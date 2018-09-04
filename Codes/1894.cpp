#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>
#include <cmath>
#include <queue>
#define REP(i,a,b) for(int i=(a);i<=(b);i++)
#define PER(i,a,b) for(int i=(a);i>=(b);i--)
#define LL long long
#define INF 0x7FFFFFFF
using namespace std;

LL read() {
	LL x = 0, f = 1; char ch = getchar();
	while (ch < '0' || ch > '9') {if (ch == '-')f = -1; ch = getchar();}
	while (ch >= '0' && ch <= '9') {x = (x << 3) + (x << 1) + ch - '0'; ch = getchar();}
	return x * f;
}

const LL mo = 1000000 + 9;
const LL N = 200000 + 5;

LL f[mo][4];
LL h[mo], c[mo];
LL a[N];
LL n, k;

LL key(LL n) {
	LL k = abs(n);
	LL x = k % mo;
	while (c[x] && h[x] != n) {
		x++;
		if (x == mo) x = 0;
	}
	c[x] = 1;
	h[x] = n;
	return x;
}

LL C_3(LL x) {
	return (LL) x * (x - 1) / 2 * (x - 2) / 3;
}

int tp() {
	for (int i = 1; i <= n; i++) {
		LL x = key(a[i]);
		f[x][1]++;
	}
	LL ans = 0;
	for (int i = 0; i < mo; i++)
		if (f[i][1]) ans += C_3(f[i][1]);
	printf("%I64d\n", ans);
}

int main() {
	n = read(), k = read();
	for (int i = 1; i <= n; i++)
		a[i] = read();
	if (k == 1) {
		tp();
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		LL x = key(a[i]);
		//printf("%d %d\n", a[i], x);
		f[x][1]++;
		if (a[i] % k == 0) {
			LL y = key(a[i] / k);
			f[x][2] += f[y][1];
			f[x][3] += f[y][2];
		}
		//printf("%d %d %d\n", f[x][1], f[x][2], f[x][3]);
	}
	LL ans = 0;
	for (int i = 0; i < mo; i++)
		if (h[i] == 0) ans += C_3(f[i][1]);
		else if (f[i][3]) ans += f[i][3];
	printf("%I64d\n", ans);
}
