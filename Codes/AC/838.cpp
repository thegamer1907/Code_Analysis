#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>	
#include <ctime>
#include <map>
#include <unordered_map>
#include <stack>
#include <cstring>
#include <string>
#include <set>
#include <unordered_set>
#include <bitset>
#include <limits>
#include <climits>
#include <queue>
#include <deque>
#include <list>
#include <forward_list>
#include <complex>
#include <sstream>
#include <assert.h>
#include <cassert>
#include <iterator>
#include <functional>
#include <tuple>
#include <array> 
#include <locale>
#include <memory>
#include <cstdio>
#include  <time.h>
//#include <bits/stdc++.h>
#define fin freopen("input.txt", "r", stdin);
#define fout freopen("output.txt", "w", stdout);
#define speedup ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define cp(x) cout.setf(ios::fixed); cout.precision(x);
#define loop(i, x, n) for(int i = x; i <= n; ++i)
#define ad push_back
#define mp make_pair
#define fr first
#define sc second
#define vc vector
#define vi vector<int>
#define pqi priority_queue<int>
#define pii pair<int, int>
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mem(a,b) memset(a, b, sizeof(a))
#define cpy(a,b,x) memcpy(a, b, sizeof(x))
#define prt(x) printf("%d", x);
#define lprt(x) printf("%lld", x);
//#define DEBUG
//#define TEST 1
#pragma warning(disable:4996)
#pragma comment(linker, "/STACK:336777216")
//#pragma GCC optimize("unroll-loops")
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
using namespace std;

const int maxN = (int)1e3 + 100;
const int N = (int)1e6 + 100;
const int MOD = (int)1e9 + 7;
const int INF = INT_MAX;
const ll LL_INF = LLONG_MAX;
const ld PI = acos((ld)-1.0);
//mt19937 gen(time(NULL));

long long cnt = 0, ans = 0;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	//#define FREOPEN
#ifdef FREOPEN
#ifndef _MSC_VER 
#define TASK ""
	freopen(TASK".in", "r", stdin);
	freopen(TASK".out", "w", stdout);
#endif
#endif 

	long long n, k; scanf("%d%lld", &n, &k);
	ll xx = floor(k / 2);
	ll x = k ^ xx;
	ll yy = floor((k - 1) / 2);
	ll y = (k - 1) ^ yy;
	ll ans = 1 + log2(abs(x - y));
	printf("%lld", ans);
	return 0;
}