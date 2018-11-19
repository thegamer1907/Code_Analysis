#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <math.h>
#include <iterator>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <string.h>
#include <cstring>
#include <queue>
#include <iomanip>
#include <istream>
#include <map>
#include <stack>
#include <numeric>
#include <ostream>
#include <set>
#include <cassert>
#include <sstream>
#include <string>
#include <utility>
#include <stdio.h>
#include <vector>
using namespace std;
#define dout if (debug) cout
#define PB push_back
#define MP make_pair
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) (int((x.size())))
typedef long double ld;
typedef long long ll;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
typedef vector<ll> VL;
typedef vector<PLL> VPL;
typedef vector<PII> VPI;
#define REP(i,a,n) for (int i=a;i<n;i++)
#define db(x) cerr << #x << " = " << x << endl
#define PER(i,a,n) for (int i=n-1;i>=a;i--)
const int INF = 1000000404;
const ll MOD = 1000000007ll;
const ld PI = acos(-1.0);
const ld EPS = 1e-9;
template <typename t1, typename t2> inline void upmax(t1 &a, t2 b) { a = max(a, (t1)b); }
template <typename t1, typename t2> inline void upmin(t1 &a, t2 b) { a = min(a, (t1)b); }
template <typename T>inline T gcd(T a, T b) { return b ? gcd(b, a%b) : a; }
template <typename T>inline T lcm(T a, T b) { return a*(b / gcd(a, b)); }
template <typename T>inline T sqr(T a) { return a*a; }
template <typename T>inline bool pal(T &x)
{
	int n = SZ(x); REP(i, 0, n / 2) { if (x[i] != x[n - i - 1]) return 0; }return 1;
}
template <typename T>inline void rev(T &x) { int n = SZ(x); REP(i, 0, n / 2) swap(x[i], x[n - i - 1]); }
int month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int dx[] = { 1, 0, -1, 0, 1, 1, -1, -1 };
int dy[] = { 0, 1, 0, -1, 1, -1, 1, -1 };
inline ll mp(ll a, ll b) { return (a << 31) + b; }
class compare{
public:
	bool operator()(const int a, const int b) const {
		return 1;
	}
};
int SQ = 400;

#define debug 1
#define N 111111

void solve()
{
	string x;
	int n;
	bool first = false;
	bool second = false;
	cin >> x;
	cin >> n; 
	bool both = false;
	string s;
	REP(i, 0, n) {
		cin >> s;
		if (s[0]==x[1]&&s[1]==x[0]||s == x) both = true;
		
		if (s[0] == x[1]) second = true;
		if (s[1] == x[0]) first = true;
	}
	if (both || (first&&second)) cout << "YES"; else cout << "NO";







}

int main()
{
	//freopen("codeforces.in", "r", stdin);
	//freopen("codeforces.out", "w", stdout);
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);
	int t = 1;
	//cin>>t;

	while (t--) {
		solve();
	};


	getchar();
	getchar();
	return 0;
}