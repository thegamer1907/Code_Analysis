#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

const ll M = 1000000007;

int n, k;
ll dp[2005][2005];
vector<ll> dv[2005];

void gdiv(ll x) {
	for (ll a = 1; a*a <= x; ++a) {
		if (x%a == 0) {
			dv[x].push_back(a);
			if (a*a != x) {
				dv[x].push_back(x/a);
			}
		}
	}
}

ll solve(ll cn, ll x) {
	if (cn == 1) return 1;
	if (dp[cn][x] != -1) return dp[cn][x];
	ll cres = 0;
	for (ll a : dv[x]) {
		cres += solve(cn-1, a);
	}
	cres %= M;
	return dp[cn][x] = cres;
}


// O(n^2*sqrt(n))
// dp transition needs to be O(1), currently O(sqrt(n))
// improved version: O(n^2*max_divcnt(1..2000) + n*sqrt(n))
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	for (int i = 0; i <= 2000; ++i) {
		for (int j = 0; j <= 2000; ++j) {
			dp[i][j] = -1;
		}
	}
	for (int i = 1; i <= 2000; ++i) {
		gdiv(i);
		sort(dv[i].begin(), dv[i].end());
	}
	ll res = 0;
	for (ll i = 1; i <= n; ++i) {
		res += solve(k, i);
	}
	res %= M;
	cout << res << "\n";
	return 0;
}