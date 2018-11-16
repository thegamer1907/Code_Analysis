#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); \
				cin.tie(0); \
				cout.tie(0)
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define all(_v)             _v.begin(), _v.end()
#define sz(_v)              (int) _v.size()
#define first(_obj)         (*_obj.begin())
#define last(_obj)          (*prev(_obj.end()))
#define FIND(_obj, _val)    (_obj.find(_val) != _obj.end())
#define RESET(_a, _v)       fill_n(_a,sizeof(_a)/sizeof(_a[0]),_v)
#define REP(_i, _n)         for (int _i = 0; _i < (int) _n; _i++)
#define FOR(_i, _a, _b)     for (int _i = (int) _a; _i <= (int) _b; _i++)
#define FORD(_i, _a, _b)    for (int _i = (int) _a; _i >= (int) _b; _i--)
#define FORIT(_it, _obj)    for (auto _it = _obj.begin(); _it != _obj.end(); _it++)

// DEBUG UTIL
#define DEBUG(args...) { cerr << "> "; \
						 string _s = #args; \
						 replace(_s.begin(), _s.end(), ',', ' '); \
						 stringstream _ss(_s); istream_iterator<string> _it(_ss); \
						 err(_it, args); }

void err(istream_iterator<string> it) { cerr << endl; }
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << ": " << a << " ";
	err(++it, args...);
}

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using pdd = pair<double,double>;
using vi = vector<int>;
using vii = vector<pii>;
using vs = vector<string>;

const int DR[] = {-1, 0, 1, 0};
const int DC[] = {0, -1, 0, 1};
const double PI = acos(-1.0);
const double EPS = 1e-9;
const int MOD = 1e9 + 7;
const int INF = 1073741823;
const ll INFLL = 4e18;
const int MAX = 300;

int N, M, K;
vii ans;

void read() {
	cin >> N >> M >> K;
}

int print() {
	cout << sz(ans);
	for (auto p : ans) cout << " " << p.fi << " " << p.se;
	cout << "\n";

	ans.clear();
	K--;

	return K == 1 ? INF : 2;
}

// 0: left, 1: right
void solve(int r, int c, int now, bool dir) {
	if (r > N || c > M) return;
	// DEBUG(r, c, now);
	if (now == 0) now = print();

	ans.pb({r, c});

	if (dir == 1) {
		if (c == M) solve(r + 1, M, now - 1, 0);
		else solve(r, c + 1, now - 1, dir);
	}
	else {
		if (c == 1) solve(r + 1, 1, now - 1, 1);
		else solve(r, c - 1, now - 1, dir);
	}
}

void solve() {
	solve(1, 1, K == 1 ? INF : 2, 1);
	print();
}

int main() {
	FAST_IO;
	int TC = 1;
	while (TC--) {
		read();
		solve();
	}
}