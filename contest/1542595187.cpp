#include<bits/stdc++.h>
#define rep(i,k,n) for(ll i= (ll) k;i< (ll) n;i++)
#define all(v) (v).begin(), (v).end()
#define SZ(v) (int)((v).size())
#define pb push_back
#define ft first
#define sd second
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const long long INF = 4e18L + 1;
const int IINF = 1e9 + 1;
const int N = 1048576;

using namespace std;

template<class TH> void _dbg(const char *sdbg, TH h){ cerr<<sdbg<<'='<<h<<endl; }
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',')cerr<<*sdbg++;cerr<<'='<<h<<','; _dbg(sdbg+1, a...);
}

//#define LOCAL
#ifdef LOCAL
#define DBG(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define DBG(...) (__VA_ARGS__)
#define cerr if(0)cout
#endif

int main() {
    #ifndef LOCAL
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #endif
    string ss;
    cin >> ss;
    char f = ss[0], s = ss[1];
    int n;
    cin >> n;
	vector<string> t(n);
    rep (i, 0, n) {
		cin >> t[i];
		if (t[i] == ss) {
			cout << "YES";
			return 0;
		}
	}
	rep (i, 0, n) {
		rep (j, 0, n) {
			if (t[i][1] == f and t[j][0] == s) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}
