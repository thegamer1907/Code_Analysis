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
    vector<pair<int, string>> v(5);
    rep (i, 0, 5) {
		cin >> v[i].ft;
	}
	v[0].ft *= 5;
	v[3].ft *= 5;
	v[4].ft *= 5;
    rep (i, 0, 5) {
		v[i].ft %= 60;
	}
	v[0].sd = "h";
	v[1].sd = "m";
	v[2].sd = "s";
	v[3].sd = "at1";
	v[4].sd = "at2";
	sort(all(v));
	rep (i, 0, 5) {
		DBG(v[i].ft, v[i].sd);
	}
	rep (i, 0, 5) {
		int j = (i + 1) % 5;
		if ((v[i].sd == "at1" and v[j].sd == "at2") or (v[i].sd == "at2" and v[j].sd == "at1")) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	
    
}
