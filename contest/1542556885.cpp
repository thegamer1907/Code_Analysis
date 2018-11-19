#ifdef DEBUG
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <cassert>
#include <sstream>
#include <fstream>
#include <functional>
#include <set>
#include <bitset>
#include <string>
#include <utility>
#include <queue>
#include <deque>
#include <vector>
#include <map>
#else
#include <bits/stdc++.h>
#endif

#ifdef DEBUG
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...)
#endif

#define rep(i, n) for (int i = 0, i##_end_ = (n); i < i##_end_; ++i)
#define per(i, n) for (int i = (n) - 1; i >= 0; --i)
#define forn(i, l, r) for (int i = (l), i##_end_ = (r); i <= i##_end_; ++i)
#define nrof(i, r, l) for (int i = (r), i##_end_ = (l); i >= i##_end_; --i)
#define X first
#define Y second
#define mp make_pair
#define pb push_back
#define SZ(x) (int)((x).size())
#define ALL(x) (x).begin(), (x).end()

using namespace std;

typedef vector<int> vi;

typedef pair<int, int> pii;

typedef long long LL;

template<typename T> inline bool chkmax(T &x, const T &y) {
	return x < y ? x = y, 1 : 0;
}

template<typename T> inline bool chkmin(T &x, const T &y) {
	return x > y ? x = y, 1 : 0;
}

#ifdef DEBUG
char *input_file, *output_file;
#endif

struct IO {
	static const int maxn = (1 << 25) + 10;

	char a[maxn], *s, b[maxn], *t;

	void INPUT() {
		s = a;
		t = b;
		#ifdef DEBUG
		FILE *f = fopen(input_file, "r");
		a[fread(a, 1, sizeof a, f)] = 0;
		#else
		a[fread(a, 1, sizeof a, stdin)] = 0;
		#endif
	}

	void OUTPUT() {
#ifdef DEBUG
		FILE *f = fopen(output_file, "w");
		fwrite(b, 1, t - b, f);
#else
		fwrite(b, 1, t - b, stdout);
#endif
	}

	operator int() {
		int x = 0;
		while(*s != '-' && (*s < '0' || *s > '9')) {
			++s;
		}
		bool f = 0;
		if(*s == '-') {
			f = 1;
			++s;
		}
		while(*s >= '0' && *s <= '9') {
			(x *= 10) += *s - '0';
			++s;
		}
		if(f) {
			x = -x;
		}
		return x;
	}

	operator LL() {
		LL x = 0;
		while(*s != '-' && (*s < '0' || *s > '9')) {
			++s;
		}
		bool f = 0;
		if(*s == '-') {
			f = 1;
			++s;
		}
		while(*s >= '0' && *s <= '9') {
			(x *= 10) += *s - '0';
			++s;
		}
		if(f) {
			x = -x;
		}
		return x;
	}

	operator char() {
		while(*s <= 32) {
			++s;
		}
		char ret = *s;
		++s;
		return ret;
	}

	inline void out(int x) {
		if(!x) {
			*t++ = '0';
			return;
		}
		if(x < 0) {
			*t++ = '-';
			x = -x;
		}
		static char c[20], *i;
		i = c;
		while(x) {
			int y = x / 10;
			*i++ = x - y * 10 + '0';
			x = y;
		}
		while(i != c) {
			*t++ = *--i;
		}
		return;
	}

	inline void out(int x, char C) {
		if(!x) {
			*t++ = '0';
			*t++ = C;
			return;
		}
		if(x < 0) {
			*t++ = '-';
			x = -x;
		}
		static char c[20], *i;
		i = c;
		while(x) {
			int y = x / 10;
			*i++ = x - y * 10 + '0';
			x = y;
		}
		while(i != c) {
			*t++ = *--i;
		}
		*t++ = C;
		return;
	}

	inline void out(LL x) {
		if(!x) {
			*t++ = '0';
			return;
		}
		if(x < 0) {
			*t++ = '-';
			x = -x;
		}
		static char c[20], *i;
		i = c;
		while(x) {
			LL y = x / 10;
			*i++ = x - y * 10 + '0';
			x = y;
		}
		while(i != c) {
			*t++ = *--i;
		}
		return;
	}

	inline void out(LL x, char C) {
		if(!x) {
			*t++ = '0';
			*t++ = C;
			return;
		}
		if(x < 0) {
			*t++ = '-';
			x = -x;
		}
		static char c[20], *i;
		i = c;
		while(x) {
			LL y = x / 10;
			*i++ = x - y * 10 + '0';
			x = y;
		}
		while(i != c) {
			*t++ = *--i;
		}
		*t++ = C;
		return;
	}

	inline void out(char c) {
		*t++ = c;
		return;
	}

	inline void out(char *s) {
		while(*s >= ' ') {
			*t++ = *s++;
		}
		return;
	}
}io;

void Main();

int main(int argc, char *argv[]) {
#ifdef DEBUG
	input_file = argv[1];
	output_file = argv[2];
#endif
	io.INPUT();
	Main();
	io.OUTPUT();
	return 0;
}

//---------------------------------------------------------------------------------------head---------------------------------------------------------------------------------------

const int maxn = 55, oo = 1123456789;

int dp[maxn << 1][maxn][maxn];
vi g[maxn];
bool isleaf[maxn];
int n, m, S;
int u[maxn], v[maxn], cnt[maxn], w[maxn];

void dfs(int S, int p = 0) {
	for (int i: g[S]) {
		int T = (i & 1) ? u[i >> 1] : v[i >> 1];
		if(T != p) {
			dfs(T, S);
			cnt[S] += cnt[T];
		}
	}
	return;
}

int DP(int i, int lft, int tot) {
	int &ret = dp[i][lft][tot];
	if(~ret) {
		return ret;
	}
	int to = (i & 1) ? u[i >> 1] : v[i >> 1];
	debug("%d %d\n", to, isleaf[to]);
	if(isleaf[to]) {
		debug("DP(%d, %d, %d) = %d\n", i, lft, tot, (tot == lft ? w[i >> 1] : DP(i ^ 1, tot - lft, tot - lft) + w[i >> 1]));
		return ret = (tot == lft ? w[i >> 1] : DP(i ^ 1, tot - lft, tot - lft) + w[i >> 1]);
	}
	int tmp[maxn];
	memset(tmp, -1, sizeof tmp);
	tmp[0] = oo;
	for (int j: g[to]) {
		if((j ^ 1) != i) {
			nrof(x, lft, 1) {
				forn(y, 1, x) {
					chkmax(tmp[x], min(tmp[x - y], DP(j, y, tot)));
				}
			}
		}
	}
	debug("DP(%d, %d, %d) = %d\n", i, lft, tot, tmp[lft] + w[i >> 1]);
	return ret = tmp[lft] + w[i >> 1];
}

void Main() {
	memset(dp, -1, sizeof dp);
	n = io;
	rep(i, n - 1) {
		u[i] = io;
		v[i] = io;
		w[i] = io;
		g[u[i]].pb(i << 1);
		g[v[i]].pb((i << 1) | 1);
	}
	S = io;
	m = io;
	int tot = 0;
	rep(i, m) {
		int x = io;
		++cnt[x];
		tot += (x != S);
	}
	forn(u, 1, n) {
		if(SZ(g[u]) == 1) {
			isleaf[u] = 1;
		}
	}
	dfs(S);
	int ans = oo;
	for (int i: g[S]) {
		int T = (i & 1) ? u[i >> 1] : v[i >> 1];
		chkmin(ans, DP(i, cnt[T], tot));
		debug("DP(%d, %d, %d) = %d\n", i, cnt[T], tot, DP(i, cnt[T], tot));
	}
	io.out(ans, '\n');
	return;
}
