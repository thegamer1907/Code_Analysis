
#pragma region Include/Defines
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <memory.h>
#include <string.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <functional>
#include <cassert>
#include <map>
#include <set>
#include <iostream>
#include <queue>
#include <time.h>

using namespace std;
typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vli;
typedef pair<int, int> pii;
typedef pair<lli, lli> pll;
typedef vector<pii> vpii;
typedef vector <pll> vpll;
typedef long double ld;
#define all(a) std::begin(a), std::end(a)

const int INF = 0x3f3f3f3f;
const lli LINF = 0x3f3f3f3f3f3f3f3f;

template<typename T, typename T2> inline void _max(T &a, T2 b) { a = max((T)a, (T)b); }
template<typename T, typename T2> inline void _min(T &a, T2 b) { a = min((T)a, (T)b); }

#ifdef _DEBUG
#define epr(...) fprintf(stderr,__VA_ARGS__)
#else
#define epr(...) 
#endif
#pragma endregion

const int MAX = 2e5 + 10;
int n, k;
int know[1 << 5];

void clear() {
	memset(know, 0, sizeof(know));
}

void read() {
	for (int i = 0; i < n; i++) {
		int t = 0, r = 0;
		for (int j = 0; j < k; j++) {
			scanf("%d", &t);
			r = r * 2 + t;
		}
		know[r]++;
	}
}

bool ok = false;
int c[5], t;

void trySolve(int m) {
	if (m == (1 << k)) {
		bool tOk = t > 0;
		for (int i = 0; i < k; i++) tOk &= 2 * c[i] <= t;		
		ok |= tOk;
		return;
	}

	for (int i = 0; i <= min(2, know[m]); i++) {
		for (int j = 0; j < k; j++) c[j] += (m >> j & 1) * i;
		t += i;
		trySolve(m + 1);
		for (int j = 0; j < k; j++) c[j] -= (m >> j & 1) * i;
		t -= i;
	}
}

void solve() {
	ok = false;
	memset(c, 0, sizeof(c));
	t = 0;
	trySolve(0);
	printf(ok ? "YES\n" :"NO\n");
}

int main() {
#ifdef _LOCAL_VAN
	freopen("in.txt", "r", stdin);
#endif
	while (scanf("%d%d", &n, &k) == 2) {
		clear();
		read();
		solve();
#ifndef _LOCAL_VAN
		return 0;
#endif
	}
	return 0;
}