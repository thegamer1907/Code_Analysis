
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

int h, m, s, t1, t2;
int can[200] = { 0 };

void clear() {
	memset(can, 0, sizeof(can));
}

void read() {
	scanf("%d%d", &t1, &t2);
}

bool valid(int t) {
	return t != h && t != s && t != m;
}

void flood(int t) {
	can[t] = 1;
	int d[2] = { 1, -1 };
	for (int i = 0; i < 2; i++) {
		int nt = (t + d[i] + 120) % 120;
		if (can[nt]) continue;
		flood(nt);
	}
}

void solve() {
	t1 = (t1 == 12 ? 0 : t1) * 5;
	h = (h == 12 ? 0 : h);
	t2 = (t2 == 12 ? 0 : t2) * 5;

	can[2 * s] = -1;
	if (s == 0) can[2 * m] = -1;
	else can[2 * m + 1] = -1;

	int ts = m * 60 + s;
	if (ts % 720 == 0) can[2 * (h * 5 + ts / 720)] = -1;
	else can[2 * (h * 5 + ts / 720) + 1] = -1;

	flood(2 * t1);
	printf(can[2 * t2] == 1 ? "YES\n" : "NO\n");
}

int main() {
#ifdef _LOCAL_VAN
	freopen("in.txt", "r", stdin);
#endif
	while (scanf("%d%d%d", &h, &m, &s) == 3) {
		clear();
		read();
		solve();
#ifndef _LOCAL_VAN
		return 0;
#endif
	}
	return 0;
}