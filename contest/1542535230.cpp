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
#include <iterator>
#include <functional>
#include <tuple>
#include <array> 
#include <locale>
#include <memory>
#include <cstdio>
#define fin freopen("input.txt", "r", stdin);
#define fout freopen("output.txt", "w", stdout);
#define speedup ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define cp(x) cout.setf(ios::fixed); cout.precision(x);
#define loop(i, x, n) for(int i = x; i <= n; ++i)
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mem(a,b) memset(a, b, sizeof(a))
#define cpy(a,b,x) memcpy(a, b, sizeof(x))
#define ad push_back
#define mp make_pair
#define fr first
#define sc second
#define vc vector
#define vi vector<int>
#define pqi priority_queue<int>
#define pii pair<int, int>
#pragma warning(disable:4996)
#pragma comment(linker, "/STACK:336777216")
//#define DEBUG
//#define TEST 1
typedef long long ll;
typedef long double ld;
typedef double dbl;
typedef unsigned long long ull;
using namespace std;

const int N = (int)1e6 + 100;
const int MOD = (int)1e9 + 7;
const int INF = INT_MAX;
const ll LL_INF = LLONG_MAX;

long long cnt = 0, ans = 0;
vector <int> dp(N);
bool u = false, U[N];
int a[N], b[N], c[N];
int A[N / 1000][N / 1000];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	//#define FREOPEN
#ifdef FREOPEN
#ifndef _MSC_VER 
#define TASK ""
	freopen(TASK".in", "r", stdin);
	freopen(TASK".out", "w", stdout);
#endif
#endif 
	
	string s; cin >> s;
	int k; cin >> k;
	string t[k];
	for (int i = 0; i < k; ++i) {
		cin >> t[i];
		if (t[i] == s) u = true;
		if (t[i][0] == s[1] && t[i][1] == s[0]) u = true;
	}
	for (int i = 0; i < k; ++i) {
		for (int j = 0; j < k; ++j) {
			if (i == j) continue;
			if (t[i][1] == s[0] && t[j][0] == s[1]) u = true;
		}
	}
	if (u) {
		printf("YES\n");
	}
	else printf("NO\n");

	return 0;
}

