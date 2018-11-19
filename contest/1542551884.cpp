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
const int maxN = 207;
const int maxM = 1024;

template<class T> inline T rd() {
	bool f = 1; char c = getchar(); for (; !isdigit(c); c = getchar()) if (c == '-') f = 0;
	T x = 0; for (; isdigit(c); c = getchar()) x = x * 10 + c - 48; return f ? x : -x;
}

int n, m;
char lf[maxN][13], rt[maxN][13], s[maxN];
int L[maxN], ans[maxN], num[maxN][13], vis[maxN][13][maxM];

int main() {
#ifndef ONLINE_JUDGE
	freopen("d.in", "r", stdin);
#endif

	n = ri();
	rep (i, 1, n) {
		scanf("%s", s+1);
		int len = strlen(s+1);
		L[i] = min(9, len);
		rep (j, 1, L[i]) lf[i][j] = s[j], rt[i][j] = s[len - j + 1];
		rep (u, 1, len) rep (v, u, min(u + 8, len)) {
			int b = 0;
			rep (j, u, v) b = b << 1 | (s[j] == '1');
			if (!vis[i][v-u+1][b]) {
				vis[i][v-u+1][b] = 1;
				num[i][v-u+1] ++;
				if (num[i][v-u+1] == (1 << (v - u + 1))) ans[i] ++;
			}
		}
	}

	m = ri();
	rep (i, n+1, n+m) {
		int x = ri(), y = ri();

		rep (u, 1, L[x]) rep (v, 1, min(L[y], 9 - u)) {
			int b = 0;
			per (j, u, 1) b = b << 1 | (rt[x][j] == '1');
			rep (j, 1, v) b = b << 1 | (lf[y][j] == '1');
			if (!vis[i][u+v][b]) {
				vis[i][u+v][b] = 1;
				num[i][u+v] ++;
				if (num[i][u+v] == (1 << (u + v))) ans[i] ++;
			}
		}

		rep (l, 1, 9) rep (b, 0, 513) if (vis[x][l][b] && !vis[i][l][b]) {
			vis[i][l][b] = 1;
			num[i][l] ++;
			if (num[i][l] == (1 << l)) ans[i] ++;
		}
		rep (l, 1, 9) rep (b, 0, 513) if (vis[y][l][b] && !vis[i][l][b]) {
			vis[i][l][b] = 1;
			num[i][l] ++;
			if (num[i][l] == (1 << l)) ans[i] ++;
		}
		printf("%d\n", ans[i]);

		rep (j, 1, L[x]) lf[i][j] = lf[x][j];
		rep (j, 1, min(9 - L[x], L[y])) lf[i][L[x] + j] = lf[y][j];
		
		rep (j, 1, L[y]) rt[i][j] = rt[y][j];
		rep (j, 1, min(9 - L[y], L[x])) rt[i][L[y] + j] = rt[x][j];

		L[i] = min(9, L[x] + L[y]);
	}
	
	return 0;
}
