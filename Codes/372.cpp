//~In The Name Of Allah~//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <cstdio>
#include <sstream>
#include <fstream>
#include <functional>
#include <stack>
#include <utility> 
#include <set>
#include <list>
#include <queue>
#include <bitset>
#include <time.h>
#include <complex>
#include <iterator>

using namespace std;

#define read freopen("in.txt", "r", stdin)
#define write freopen("out.txt", "w", stdout)
#define all(_) _.begin(), _.end()
#define rall(_) _.rbegin(), _.rend()
#define rep(i, j) for (int i = 0; i < j; i++)
#define Rep(i, j, k) for (int i = j; i < k; i++)
#define siz(_) (int)_.size()
#define ll long long
#define endl '\n'
#define ff fflush(stdout)
#define stp cin.get(); cin.get();

const double PI = 2.0 * acos(0.0);
const int MOD = 1e9 + 7;
const int oo = 2 * MOD + 1e3;

typedef pair<int, int> pii;

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a%b); }

int main() {
	int n, idx = 1, ans = 0;
	cin >> n;
	while (n) {
		int tmp = idx, s = 0;
		while (tmp)
			s += tmp % 10, tmp /= 10;
		if (s == 10)
			--n, ans = idx;
		++idx;
	}
	cout << ans << endl;
	stp;
	return 0;
}