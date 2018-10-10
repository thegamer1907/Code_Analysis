#define _CRT_SECURE_NO_WARNINGS
#define REL

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>
#include <queue>
#include <iomanip>
#include <cstdio>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <string>
#include <set>
#include <bitset>
#include <cassert>
#include <cstdint>
#include <cstring>

typedef int64_t i64;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;

#define mp make_pair
#define pb push_back
#define pt pair<int, int>
#define pl pair<LL, LL>
#define endl "\n"

const int N = (int)1e6 + 1;
const int N_ = (int)5e3 + 1;
const int LN = 20;
const LD PI = 3.1415926535897932384626433832795;
const LD EPS = 1e-8;
const int MOD = (int)1e9 + 7;
const LL LINF = (i64)1e15;
const int INF = (int)1e9;
const int DEL = (int)1e6 + 1;
const int PR = 115249;
const int CNT = 15626;

using namespace std;

template <typename T>
T sqr(T a) {
	return a * a;
}

int n, a[N];

void read() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void solve() {
	LL ans = LINF, pos = -1;
	for (int i = 0; i < n; i++) {
		a[i] -= i;
		if (ans >(a[i] + n - 1) / n)
			ans = (a[i] + n - 1) / n, pos = i + 1;
	}
	cout << pos;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cout << fixed << setprecision(20);
#else
	//freopen("cinema.in", "r", stdin);
	//freopen("cinema.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cout << fixed << setprecision(20);
#endif
	read();
	solve();
}