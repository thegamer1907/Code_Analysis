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
	char f, s;
	cin >> f >> s;
	int n;
	cin >> n;
	int ff = 0;
	int ss = 0;
	for (int i = 1; i <= n; ++i) {
		string cur;
		cin >> cur;
		if (cur[0] == f && cur[1] == s) {
			return 0 * printf("YES");
		}
		if (cur[1] == f) ff = 1;
		if (cur[0] == s) ss = 1;
	}
	if (ff && ss) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}