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
    
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(4));
    rep (i, 0, n) {
		rep (j, 0, k) {
			cin >> a[i][j];
		}
	}
	vector<bool> jest(11), an(4);
	vector<vector<int>> b({
		{0, 0, 0, 0},
		
		{1, 0, 0, 0},
		{0, 1, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 0, 1},
		
		{0, 0, 1, 1}, 
		{0, 1, 0, 1}, 
		{0, 1, 1, 0}, 
		{1, 0, 0, 1}, 
		{1, 0, 1, 0}, 
		{1, 1, 0, 0}
	});
	
	rep (i, 0, n) {
		rep (j, 0, 11) {
			if(a[i] == b[j]) {
				jest[j] = 1;
			}
		}
		rep (j, 0, 4) {
			if(a[i][j] == 0) {
				an[j] = 1;
			}
		}
	}
	if (jest[0]) {
		cout << "YES";
		return 0;
	}
	if ((jest[5] and jest[10]) or (jest[6] and jest[9]) or (jest[7] and jest[8])) {
		cout << "YES";
		return 0;
	}
	rep (i, 0, 4) {
		if (jest[i + 1] and an[i]) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
		
    
}
