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

const int MAX = 210, ML = 1000;

string l[MAX], r[MAX];
int k[MAX], n, m, len[MAX];

void clear() {
	memset(k, 0, sizeof(k));
}

void read() {
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		l[i] = r[i] = s;
		len[i] = s.size();
	}
}

void update(string &s) {
	int i;
	for (i = s.size() - 1; i >= 0 && s[i] == '1'; i--) s[i] = '0';
	if (i >= 0) s[i] = '1';
}

bool check(string &s, int k) {
	string ks(k, '0');
	for (int i = 0; i < 1 << k; i++) {
		if (s.find(ks) == string::npos) return false;
		update(ks);
	}
	return true;
}

void solve() {
	for (int i = 0; i < n; i++)
		while (check(l[i], k[i] + 1)) k[i]++;

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		a--, b--;

		int tk = max(k[a], k[b]);
		string mid = r[a] + l[b];
		while (check(mid, tk + 1)) tk++;
		len[n + i] = (len[a] >= INF || len[b] >= INF) ? INF : len[a] + len[b];
		l[n + i] = l[a].size() == len[a] ? mid.substr(0, min(ML, (int)mid.size())) : l[a];
		r[n + i] = r[b].size() == len[b] ? mid.substr(mid.size() - min(ML, (int)mid.size()), min(ML, (int)mid.size())) : r[b];
		k[n + i] = tk;
		printf("%d\n", tk);
	}
}

int main() {
#ifdef _LOCAL_VAN
	freopen("in.txt", "r", stdin);
#endif
	while (scanf("%d", &n) == 1) {
		clear();
		read();
		solve();
#ifndef _LOCAL_VAN
		return 0;
#endif
	}
	return 0;
}