#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstdlib>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <string>
#include <unordered_map>
#include <iomanip>
#include <deque>
using namespace std;
//#define int long long

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int h, m, s, t, tt;
	cin >> h >> m >> s >> t >> tt;
	if (h == 12) h = 0;
	if (t == 12) t = 0;
	if (tt == 12) tt = 0;
	set <int> sss;
	sss.insert(h * 60 * 60 + m * 3600 / 60 + s);
	sss.insert(s * 3600 / 5);
	sss.insert(m * 3600 / 5 + s * 3600 / 5 / 60);
	t = t * 60 * 60;
	tt = tt * 60 * 60;
	if (t > tt) swap(t, tt);
	for (int i = t + 1; i < tt; ++i) {
		if (sss.count(i)) goto ll;
	}
	cout << "YES" << endl;
	return 0;
ll:;
	for (int i = tt + 1; i < 3600 * 12; ++i) {
		if (sss.count(i)) goto lll;
	}
	for (int i = 0; i < t; ++i) {
		if (sss.count(i)) goto lll;
	}
	cout << "YES" << endl;
	return 0;
lll:;
	cout << "NO" << endl;
}