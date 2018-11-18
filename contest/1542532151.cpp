#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <bitset>
#include <iomanip>
#include <memory>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <climits>
#include <cassert>
using namespace std;

#define mp make_pair
#define add push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mem(a,b) memset(a, b, sizeof(a))
#pragma GCC optimize("unroll-loops")

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair <int, int> pii;
typedef vector <int> lnum;

const int N = (int)1e6 + 100;
const int maxn = (int)1e3 + 100;
const int base = (int)1e9;
const int mod = (int)1e9 + 7;
const int inf = INT_MAX;
const long long ll_inf = LLONG_MAX;
const long double PI = acos((long double)-1.0);
const long double eps = 1e-8;

void solve() {
	string pass; cin >> pass;
	int n; cin >> n;
	string s[102];
	for (int i = 0; i < n; ++i) cin >> s[i];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (s[j][1] == pass[0] && s[i][0] == pass[1]) {
				cout << "YES\n";
				return;
			}
		}
	}
	for (int i = 0; i < n; ++i) if (s[i] == pass || (s[i][0] == pass[1] && s[i][1] == pass[0])) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
}

int main() {
	//ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	//#define Freopen
#ifdef Freopen
#ifndef _MSC_VER 
#define TASK ""
	freopen(TASK".in", "r", stdin);
	freopen(TASK".out", "w", stdout);
#endif
#endif

	int T = 1;
	//scanf("%d", &T);

	for (; T; --T) solve();

#ifdef DEBUG
	cerr << double(1.0 * clock() / CLOCKS_PER_SEC) << '\n';
#endif 

	return 0;
}