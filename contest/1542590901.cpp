
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

const int MAX = 110;
string s[MAX];
char p[5];
int n;

void clear() {
}

void read() {
}

void solve() {
	bool ok = false;
	bool last[30] = { 0 }, first[30] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		ok |= p == s[i];
		last[s[i][1] - 'a'] = first[s[i][0] - 'a'] = true;
	}

	ok |= last[p[0] - 'a'] && first[p[1] - 'a'];

	printf(ok ? "YES\n" : "NO\n");
}

int main() {
#ifdef _LOCAL_VAN
	freopen("in.txt", "r", stdin);
#endif
	while (scanf("%s %d", p, &n) == 2) {
		clear();
		read();
		solve();
#ifndef _LOCAL_VAN
		return 0;
#endif
	}
	return 0;
}