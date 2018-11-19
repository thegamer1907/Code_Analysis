#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
namespace remoon {
	#define ri register int
	#define ll long long
	#define tpr template <typename ra>
	#define rep(io, st, ed) for(ri io = st; io <= ed; io ++)
	#define drep(io, ed, st) for(ri io = ed; io >= st; io --)
	#define gc getchar
	#define pc(iw) putchar(iw)
	inline int read() {
		int p = 0, w = 1; char c = gc();
		while(c > '9' || c < '0') { if(c == '-') w = -1; c = gc(); }
		while(c >= '0' && c <= '9') p = p * 10 + c - '0', c = gc();
		return p * w;
	}
	int wr[50], rw;
	tpr inline void write(ra x, char c = '\n') {
		if(!x) pc('0');
		if(x < 0) x = -x, pc('-');
		while(x) wr[++ rw] = x % 10, x /= 10;
		while(rw) pc(wr[rw --] + '0'); pc(c);
	}
	tpr inline void cmin(ra &a, ra b) { if(a > b) a = b; }
	tpr inline void cmax(ra &a, ra b) { if(a < b) a = b; }
	tpr inline bool ckmin(ra &a, ra b) { return (a > b) ? a = b, 1 : 0; }
	tpr inline bool ckmax(ra &a, ra b) { return (a < b) ? a = b, 1 : 0; }
}
using namespace remoon;
using namespace std;

const int sid = 1e5 + 5;
const ll inf = 1e15;

int n, k, nl, nr;
int a[sid], num[sid];
ll ret = 0, f[sid][25];

inline ll trans(int l, int r) {
	while(nl < l) ret -= -- num[a[nl ++]];
	while(nl > l) ret += num[a[-- nl]] ++;
	while(nr < r) ret += num[a[++ nr]] ++;
	while(nr > r) ret -= -- num[a[nr --]];
	return ret;
}

inline void solve(int l, int r, int L, int R, int lev) {
	if(l > r) return;
	int mid = (l + r) >> 1, pos = -1;
	rep(i, L, min(R, mid)) {
		ll t = trans(i, mid);
		if(ckmin(f[mid][lev], t + f[i - 1][lev - 1])) pos = i;
	}
	solve(l, mid - 1, L, pos, lev);
	solve(mid + 1, r, pos, R, lev);
}

int main() {
	n = read(); k = read();
	rep(i, 1, n) a[i] = read();
	rep(i, 1, n) rep(j, 0, k) f[i][j] = inf;
	nl = 1, nr = n;
	rep(i, 1, n) ret += num[a[i]] ++;
	f[0][0] = 0;
	rep(i, 1, k) solve(1, n, 1, n, i);
	write(f[n][k]);
	return 0;
}