#include <fstream>
#include <stdio.h>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cassert>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <bitset>
#include <list>

using namespace std;

#define x first
#define y second
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define len(a) int((a).size())
#define sqr(x) ((x)*(x))
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define print(x) cout << "= " << x << endl;
#define NAME "events"
#define FREOPEN freopen(NAME".in", "r", stdin); freopen(NAME".out", "w", stdout);

#define y0 sdkfaslhagaklsldk
#define y1 aasdfasdfasdf
#define yn askfhwqriuperikldjk
#define j1 assdgsdgasghsf
#define tm sdfjahlfasfh
#define lr asgasgashqt
#define free afdshjioeyqtw
#define next qpowityqwopqw
#define prev ppiopipoiuyio

typedef unsigned int unt;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair < int, int > pii;
typedef pair < ll, ll > pll;

const int MOD = 95542721;
const int INF = 2e9;
const ll INF64 = 4e18;
const ld EPS = 1e-16;
const ll MD = 1e9 + 7;
const ll T = 2543;
const int N = 100010;
const int M = 100;
const int DEBUG = 0;
const int MAGIC = 320;

int n;
long long c[N], dp[N][2];
string s[N];

int main() {
	cin >> n;
	forn(i, n) {
		cin >> c[i];
	}
	forn(i, n) {
		cin >> s[i];
	}
	dp[0][1] = c[0];
	for (int i=1; i<n; i++) {
		string s0 = s[i-1];
		string s1 = s[i];
		dp[i][0] = dp[i][1] = INF64;
		if (s1 >= s0)
			dp[i][0] = min(dp[i][0], dp[i-1][0]);
		reverse(all(s0));
		if (s1 >= s0)
			dp[i][0] = min(dp[i][0], dp[i-1][1]);
		reverse(all(s0));
		reverse(all(s1));
		if (s1 >= s0)
			dp[i][1] = min(dp[i][1], dp[i-1][0]+c[i]);
		reverse(all(s0));
		if (s1 >= s0)
			dp[i][1] = min(dp[i][1], dp[i-1][1]+c[i]);
	}
	long long ans = min(dp[n-1][0], dp[n-1][1]);
	if (ans == INF64)
		cout << -1;
	else
		cout << ans;
	return 0;
}


/*






*/