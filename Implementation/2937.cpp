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

int n, q, dp[N];


int main() {
	cin >> n;
	forn(i, n) {
		int x;
		cin >> x;
		dp[x] += 1;
	}
	for(int i=1; i<N; i++)
		dp[i] += dp[i-1];
	cin >> q;
	forn(i, q) {
		int x;
		cin >> x;
		x = min(x, 100000);
		cout << dp[x] << endl;
	}

	return 0;
}


/*






*/