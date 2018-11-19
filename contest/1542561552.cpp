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
const int MAX = 100;

int N;
string s;
string arr[MAX+5];

void read() {
	cin >> s >> N;
	REP(i, N)
		cin >> arr[i];
}

void solve() {
	REP(i, N) {
		REP(j, N) {
			string r = arr[i] + arr[j];
			if (r.find(s) != string::npos) {
				// cerr << r << "\n";
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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