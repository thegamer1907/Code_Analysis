#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <bitset>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iterator>
#include <sstream>
#include <fstream>
#include <functional>
#include <ctime>
#include <cassert>
#include <limits>

using namespace std;

#define SyncFalse ios::sync_with_stdio(0); cin.tie(NULL)
#define MEM(a, v) memset(a, v, sizeof(a))
#define CLRV(a, sz, v) a.clear(); a.resize(sz, v)
#define CLR(a, sz) a.clear(); a.resize(sz)
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.end(), a.begin()
#define MP make_pair
#define FI first
#define SE second
#define PB push_back
#define POB pop_back
#define PF push_front
#define POF pop_front
#define SZ(a) (int)a.size()
#define LNG(a) (int)a.length()
#define LPI 3.141592653589793238462643383279502884L
#define SI(n) scanf("%d", &n)
#define SL(n) scanf("%lld", &n)
#define SD(n) scanf("%lf", &n)
#define SLD(n) scanf("%llf", &n)
#define SC(n) scanf(" %c", &n)
#define SS(n) scanf("%s", n)
#define FR(i, n) for (int i = 0; i < n; i++)
#define RFR(i, n) for (int i = n - 1; i >= 0; i--)
#define FR1(i, n) for (int i = 1; i <= n; i++)
#define RFR1(i, n) for (int i = n; i >= 1; i--)
#define FOREACH(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef long double ld;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<ld> VLD;
typedef vector<double> VD;
typedef vector<bool> VB;
typedef vector<char> VC;
typedef vector<string> VS;
typedef vector<VI> VVI;
typedef pair<int, int> PII;
typedef map<int, int> MII;
typedef map<string, int> MSI;
typedef vector<PII> VPII;
typedef vector<VPII> VVPII;

const double PI = acos(-1.0);
const double EPS = numeric_limits<double>::epsilon();
const int INF = (int) 1e9;
const ll LINF = (ll) 1e18;
const int MOD = (int) 1e9 + 7;
const int MAXN = (int) 2e5 + 10;

//------------------------------------------------------------------------
ll n, q, a[MAXN], b[MAXN];

int main() {
	SyncFalse;
	cin >> n >> q;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < q; i++) cin >> b[i];
	for (int i = 1; i < n; i++) a[i] += a[i - 1];
	ll cd = 0;
	for (int i = 0; i < q; i++) {
		cd += b[i];
		int y = upper_bound(a, a + n, cd) - a;
		if (y >= n) {
			cout << n << endl;
			cd = 0;
		}
		else {
			cout << n - y << endl;
		}
	}
	return 0;
}