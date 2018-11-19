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
int n, k;
int mas[20];
int pp[20];
int id;
void check() {
	vector <int> cnt(k);
	int gg = 0;
	for (int i = 0; i < id; ++i) {
		gg += pp[i];
		for (int j = 0; j < k; ++j) {
			if (pp[i] && ((1 << j) & mas[i])) {
				cnt[j]++;
			}
		}
	}
	if (!gg) return;
	for (int i = 0; i < k; ++i) {
		if (cnt[i] * 2 > gg) return;
	}
	cout << "YES" << endl;
	exit(0);
}
void pereb(int pos) {
	if (pos == id) {
		check();
		return;
	}
	pp[pos] = 0;
	pereb(pos + 1);
	pp[pos] = 1;
	pereb(pos + 1);
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	set <int> sss;
	
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		int cur = 0;
		for (int j = 0; j < k; ++j) {
			int curr;
			cin >> curr;
			cur += curr * (1 << j);
		}
		sss.insert(cur);
	}
	id = 0;
	for (auto it : sss) {
		mas[id++] = it;
	}
	pereb(0);
	cout << "NO" << endl;
}