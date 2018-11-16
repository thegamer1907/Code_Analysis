// I love meowmur
#pragma GCC optimize("Ofast", "unroll-loops")
#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define all(a) (a).begin(), (a).end()
#define sz(a) (ll)((a).size())
#define heap priority_queue
#define hash_map unordered_map
#define hash_set unordered_set
#define ft first
#define sd second
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define mineq(a, b) (a) = ((a)>(b))?(b):(a)
#define maxeq(a, b) (a) = ((a)<(b))?(b):(a)
#define die(cond) if (cond) for(;;){}
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<ll> vll;
typedef set<ll> sll;
typedef map<ll, ll> mll;
const ll inf = numeric_limits<ll>::max() / 2;
const ld eps = 1e-9;
const ld pi = acos(-1);

inline void solve(), read();

int main() {
	fast;
	read();
	solve();
	return 0;
}

const ll MAXN = 101;
const ll R = 8;

ll n;
vll a;
vll dp[MAXN][R];

inline void solve() {
	dp[1][a[1] % R] = { a[1] };
	for (ll i = 2; i <= n; i++) {
		for (ll d = 0; d < R; d++) {
			ll nr = (d * 10 + a[i]) % R;
			if (!dp[i][nr].empty()) {
				continue;
			}
			dp[i][nr] = dp[i - 1][d];
			if (!dp[i][nr].empty() || a[i] % R == nr) {
				dp[i][nr].pb(a[i]);
			}
		}
		for (ll d = 0; d < R; d++) {
			if (dp[i][d].empty()) {
				dp[i][d] = dp[i - 1][d];
			}
		}
	}
	if (dp[n][0].empty()) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	reverse(all(dp[n][0]));
	while (sz(dp[n][0]) > 1 && dp[n][0].back() == 0) {
		dp[n][0].popb();
	}
	reverse(all(dp[n][0]));
	for (ll d : dp[n][0]) {
		cout << d;
	}
	cout << endl;
}

inline void read() {
	string s;
	cin >> s;
	n = sz(s);
	a.resize(n + 1);
	for (ll i = 0; i < n; i++) {
		a[i + 1] = s[i] - '0';
	}
}