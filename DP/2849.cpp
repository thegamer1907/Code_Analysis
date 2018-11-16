#include <bits/stdc++.h>
//#include "util.h"
using namespace std;

#define sz(x) (int)(x).size()
#define F first
#define S second
#define mpa make_pair
#define pb emplace_back
#define int long long

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< pii > vii;
typedef vector< vi > vvi;

template<typename c> void smax(c &x, c y) { x = max(x, y); }
template<typename c> void smin(c &x, c y) { x = min(x, y); }

const int maxn = 2e3 + 11;
const int mod = 1e9 + 7;
int dp[maxn][maxn];
vi d[maxn];
int n, k;
int32_t main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	for (int i = 1; i < maxn; i++)
		for (int j = i; j < maxn; j += i)
			d[j].pb(i);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		dp[i][1] = 1;
		for (int j = 2; j <= k; j++) {
			for (auto x : d[i]) {
				dp[i][j] += dp[x][j-1];
				dp[i][j] %= mod;
			}
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; i++)
		ans = (ans + dp[i][k]) % mod;
	cout << ans << endl;
	return 0;
}
