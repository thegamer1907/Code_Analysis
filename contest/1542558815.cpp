#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(0); \
				cin.tie(0); \
				cout.tie(0)
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define all(_v)				_v.begin(), _v.end()
#define sz(_v)				(int) _v.size()
#define FIND(_obj, _val)	(_obj.find(_val) != _obj.end())
#define RESET(_a, _v)		fill_n(_a,sizeof(_a)/sizeof(_a[0]),_v)
#define REP(_i, _n)			for (int _i = 0; _i < (int) _n; _i++)
#define FOR(_i, _a, _b)		for (int _i = (int) _a; _i <= (int) _b; _i++)
#define FORD(_i, _a, _b)	for (int _i = (int) _a; _i >= (int) _b; _i--)
#define FORIT(_it, _obj)	for (auto _it = _obj.begin(); _it != _obj.end(); _it++)

// DEBUG UTIL
#define DEBUG(x) cerr << "> " << #x << " = " << x << endl

using namespace std;

using ll = long long;
using ii = pair<int,int>;
using pll = pair<ll,ll>;
using pdd = pair<double,double>;
using vi = vector<int>;
using vii = vector<ii>;
using vs = vector<string>;

const double PI = acos(-1.0);
const double EPS = 1e-14;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 4e18;
const int MAX = 1e5;

double h, m, s, t1, t2;

void read() {
	cin >> h >> m >> s >> t1 >> t2;
}

void solve() {
	h = fmod((0.5 * (60 * h + m) + (s == 0 ? 0 : 0.5)), 360) ;
	m = (m*6) + (s == 0 ? 0 : 0.05);
	s *= 6;
	t1 = fmod((t1 * 30), 360);
	t2 = fmod((t2 * 30), 360);
	double tmp1 = t1, tmp2 = t2;
	t1 = min(tmp1, tmp2);
	t2 = max(tmp1, tmp2);

	// cerr << h << " " << m << " " << s << " " << t1 << " " << t2 << "\n";

	bool bisa = false;
	if (!(t1 < h && h < t2) && !(t1 < m && m < t2) && !(t1 < s && s < t2)) bisa = true, cerr << "atas\n";
	if ((t1 < h && h < t2) && (t1 < m && m < t2) && (t1 < s && s < t2)) bisa |= true, cerr << "bawah\n";

	if (bisa) cout << "YES\n";
	else cout << "NO\n";
}

int main()
{
	FAST_IO;
	int TC = 1;
	while (TC--) {
		read();
		solve();
	}
} 