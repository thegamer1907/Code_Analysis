#include <bits/stdc++.h>
#define ADD(a, b) a = (a + ll(b)) % mod
#define MUL(a, b) a = (a * ll(b)) % mod
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define rep(i, a, b) for(int i = int(a); i < int(b); i++)
#define rer(i, a, b) for(int i = int(a) - 1; i >= int(b); i--)
#define all(a) (a).begin(), (a).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define sec second
#define fst first
#define debug(fmt, ...) Debug(__LINE__, ":", fmt, ##__VA_ARGS__)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<int, pi> ppi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vl> mat;
typedef complex<double> comp;
void Debug() {cout << '\n'; }
template<class FIRST, class... REST>void Debug(FIRST arg, REST... rest){
	cout<<arg<<" ";Debug(rest...);}
template<class T>ostream& operator<<(ostream& out,const vector<T>& v) {
	out<<"[";if(!v.empty()){rep(i,0,sz(v)-1)out<<v[i]<<", ";out<<v.back();}out<<"]";return out;}
template<class S, class T>ostream& operator<<(ostream& out,const pair<S, T>& v){
	out<<"("<<v.first<<", "<<v.second<<")";return out;}
const int MAX_N = 200010;
const int MAX_V = 100010;
const double eps = 1e-6;
const ll mod = 1000000007;
const int inf = 1 << 29;
const ll linf = 1LL << 60;
const double PI = 3.14159265358979323846;
///////////////////////////////////////////////////////////////////////////////////////////////////

int N, K;
int lv, rv;
int A[MAX_N];
int C[200010];
ll dp[30][200010];
ll S;

void add(int v) {
	S += C[A[v]];
	C[A[v]]++;
}

void sub(int v) {
	C[A[v]]--;
	S -= C[A[v]];
}

void query(int l, int r) { //[lv, rv)to[l, r)
	while(lv < l) sub(lv++);
	while(lv > l) add(--lv);
	while(rv > r) sub(--rv);
	while(rv < r) add(rv++);
}

//omoomo
void loop(int l, int r, int pl, int pr, int k) { //[l, r) and [pl, pr)
	// debug(l, r, pl, pr, k);
	int m = (l + r) / 2;
	int at = 0;
	for(int i = min(m, pr); i >= pl; i--) {
		query(i, m);
		if(dp[k + 1][m] >= S + dp[k][i]) {
			at = i;
			dp[k + 1][m] = S + dp[k][i];
		}
	}
	if(r - l <= 1) return;
	loop(l, m, pl, at, k);
	loop(m + 1, r, at, pr, k);
}

void solve() {
	cin >> N >> K;
	rep(i, 0, N) cin >> A[i];
	S = 0; lv = 0; rv = 0;
	dp[1][0] = linf;
	rep(i, 1, N + 1) {
		query(0, i);
		dp[1][i] = S;
		// debug(i, dp[1][i]);
	}
	// rep(i, 0, N) {
	// 	rep(j, i + 1, N + 1) {
	// 		query(i, j);
	// 		debug(i, j, S);
	// 	}
	// }
	rep(k, 1, K) {
		rep(i, 0, N + 1) dp[k + 1][i] = linf;
	}
	rep(i, 1, K) {
		loop(0, N + 1, 0, N + 1, i);
	}
	// rep(i, 1, K + 1) {
	// 	rep(j, 0, N + 1) debug(i, j, dp[i][j]);
	// }
	cout << dp[K][N] << "\n";
}

int main() {
#ifndef LOCAL
	ios::sync_with_stdio(false);
    cin.tie(0);
#endif
    cout << fixed;
	cout.precision(20);
#ifdef LOCAL
    freopen("in.txt", "rt", stdin);
#endif	
	solve();
#ifdef LOCAL
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}

