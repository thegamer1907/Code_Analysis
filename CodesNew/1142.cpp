#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
//#include <windows.h>
#include <ctime>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <climits>
#include <functional>
#include <map>
#include <fstream>
#include <iomanip> 
#include <random>

using namespace std;

#define forn(i,n) for (int i = 0; i < n; i++)
#define what_is(x) cerr << '\n'<< #x << " = " << x << '\n'
#define print_arr(heh) cerr << '\n'; for (auto u : heh) cerr << u << ' '; cerr << '\n'
#define print_arri(heh) cerr << '\n'; for (int i = 0; i < heh.size(); i++) cerr << #heh << "[" << i << "] = " << heh[i] << '\n'
#define endl '\n'
#define all(a) a.begin(), a.end()
#define int long long
#define ll long long
#define ld long double
#define DEBUG

#undef int
int main() {
#define int long long
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int l = 1, r = n;
	while (l <= r) {
		int mid = (l + r) / 2;

		int cur = n;
		int first = 0, second = 0;
		while (cur > 0) {
			if (cur - mid < 0) {
				first += cur;
			}
			else first += mid;
			cur -= mid;
			if (cur > 0) {
				second += cur / 10;
				cur = cur - cur / 10;
			}
		}

		if (first < second) {
			l = mid + 1;
		}
		else r = mid - 1;
	}
	cout << l;

#ifdef DEBUG
	cerr << "\nTime: " << (double)clock() / CLOCKS_PER_SEC << endl;
#endif
	return 0;
}

/*
7 6 1
2 1
3 1
4 3
7 4
6 4
4 5
*/