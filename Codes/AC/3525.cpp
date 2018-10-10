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
const int N_ = (int)1e3 + 1;
const int MOD = (int)1e9 + 7;
const int INF = (int)1e9;
const int DEL = (int)1e6 + 1;
const int ALPH = 26;
const LL LINF = (i64)2e18;
const LD PI = 3.1415926535897932384626433832795;
const LD EPS = 1e-2;

using namespace std;

template <typename T>
T sqr(T a) {
	return a * a;
}

LL n;

void read() {
	cin >> n;
}

bool check(LL m) {
	LL nn = n, cnt = 0;
	bool turn = true;
	while (nn) {
		if (turn) {
			cnt += min(m, nn);
			nn -= min(m, nn);
		}
		else {
			nn -= nn / 10;
		}
		turn = !turn;
	}
	return cnt >= (n + 1) / 2;
}

void solve() {
	LL l = 0, r = LINF;
	while (r - l > 1) {
		LL m = (r + l) / 2;
		if (check(m))
			r = m;
		else
			l = m;
	}
	cout << r;
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