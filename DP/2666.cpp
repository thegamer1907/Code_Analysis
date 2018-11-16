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
const ll MD = 1551513443;
const ll T = 2543;
const int N = 300010;
const int M = 100;
const int DEBUG = 0;
const int MAGIC = 320;

string s, t;
int x, wa, ok;

void rec(int i, int y) {
	if (i == len(s)) {
		if (x == y)
			ok += 1;
		else
			wa += 1;
		return;
	}
	if (t[i] == '?') {
		rec(i+1, y+1);
		rec(i+1, y-1);
	} else if (t[i] == '+')
		rec(i+1, y+1);
	else if (t[i] == '-')
		rec(i+1, y-1);
}

int main() {
	cin >> s >> t;
	forn(i, len(s)) {
		if (s[i] == '+')
			x += 1;
		else
			x -= 1;
	}
	rec(0, 0);
	printf("%.9f", double(ok) / double(wa+ok));
	return 0;
}


/*






*/