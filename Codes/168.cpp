#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <memory>
#include <numeric>
#include <functional>
#include <sstream>
#include <queue>
#include <deque>
#include <list>
#include <vector>
#include <stack>
#include <set>
#include <unordered_set>
#include <map> 
#include <unordered_map>
#include <bitset>
#include <tuple>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cassert>
#include <climits>
#include <ctime>
using namespace std;

#define rep(i, x, y) for(int i = x; i <= y; ++i)
#define mp make_pair
#define add push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mem(a,b) memset(a, b, sizeof(a))
#pragma warning(disable:4996)
#pragma comment(linker, "/STACK:20000007")
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
const long double pi = acos((long double)-1.0);
const long double eps = 1e-8;

void solve() {
	int n; cin >> n;
	vector <int> V;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		if (V.empty()) V.add(x);
		else V.add(V.back() + x);
	}
	int q; cin >> q;
	for (; q; --q) {
		int x; cin >> x;
		cout << 1 + lower_bound(all(V), x) - V.begin() << '\n';
	}
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