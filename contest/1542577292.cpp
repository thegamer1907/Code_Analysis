#include<bits/stdc++.h>
#define rep(i,k,n) for(ll i= (ll) k;i< (ll) n;i++)
#define all(v) (v).begin(), (v).end()
#define SZ(v) (ll)((v).size())
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

#undef LOCAL
#ifdef LOCAL
#define DBG(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define DBG(...) (__VA_ARGS__)
#define cerr if(0)cout
#endif
 
ll n, m;
ll maxk = 20;
vector<string> a;
vector<vector<set<string>>> s;
vector<string> pref, suff;

void insert_all(int i, string& ss) {
	DBG("inserting", ss);
	rep (j1, 0, SZ(ss)) {
		for (ll dl = 1; j1 + dl - 1 < SZ(ss) and dl <= maxk; dl++) {
			DBG(j1, dl, ss.substr(j1, dl));
			s[i][dl].insert(ss.substr(j1, dl));
		}
	}
}

void go(int i, int l, int r) {
	string sr = suff[l] + pref[r];
	insert_all(i, sr);
	DBG(l, r, sr);
	int dp = min(SZ(pref[r]), maxk - SZ(pref[l]));
	string np = pref[l] + pref[r].substr(0, dp);
	pref.pb(np);
	int ds = min(SZ(suff[l]), maxk - SZ(suff[r]));
	string ns = suff[l].substr(SZ(suff[l]) - ds, ds) + suff[r];
	suff.pb(ns);
	DBG(np, ns);
}
		
int main() {
    #ifndef LOCAL
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #endif
    
    cin >> n;
    a.resize(n);
    pref.resize(n);
    suff.resize(n);
    s.resize(n);
    for (auto& x: s) {
		x.resize(maxk + 1);
	}
    rep (i, 0, n) {
		DBG(i);
		cin >> a[i];
		insert_all(i, a[i]);
		int dl = min(maxk, SZ(a[i]));
		pref[i] = a[i].substr(0, dl);
		suff[i] = a[i].substr(SZ(a[i]) - dl, dl);
		DBG(i, pref[i], suff[i]);
		rep (k, 0, maxk) {
			for (auto x: s[i][k]) {
				DBG(i, k, x);
			}
		}
	}
	cin >> m;
	rep (i, 0, m) {
		cerr << "\n\n";
		DBG(i + n);
		s.pb(vector<set<string>>(maxk + 1));
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		rep (k, 0, maxk) {
			for (auto x: s[l][k]) {
				s[i + n][k].insert(x);
			}
			for (auto x: s[r][k]) {
				s[i + n][k].insert(x);
			}
		}
		rep (k, 0, maxk) {
			for (auto x: s[i + n][k]) {
				DBG(i + n, k, x);
			}
		}
		go(i + n, l, r);
		rep (k, 0, maxk) {
			for (auto x: s[i + n][k]) {
				DBG(i + n, k, x);
			}
		}
		rep (j, 1, maxk) {
			DBG(j, SZ(s[i + n][j]), (1 << j));
			for (auto x: s[i + n][j]) {
				cerr << x << " ";
			}
			cerr << "\n";
			if (SZ(s[i + n][j]) != (1 << j)) {
				cout << j - 1 << "\n";
				break;
			}
		}
	}
}
