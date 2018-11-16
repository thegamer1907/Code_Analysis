#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <vector>
#include <deque>
#include <bitset>
#include <algorithm>
#include <set>
#include <iomanip>
#include <string>
#include <map>
#include <cassert>
#include <numeric>
#include <functional>

#ifndef Local_file
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#endif

#define rn(n) int n; cin >> n;
#define fv(i, n) for (int i = 0; i < n; i++)
#define mp(a, b) make_pair(a, b)
#define sqr(a) ((a) * (a))
using namespace std;

const long long INF = 1'000'000'007;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifdef Local_file
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[4];
	fv(i, 4)
		cin >> a[i];
	rn(k);
	bitset <1'000'000> b;
	fv(i, k) {
		fv(j, 4) {
			if ((i + 1) % a[j] == 0)
				b[i] = true;
		}
	}
	cout << b.count();
	return 0;
}