#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define str string
#define fi first
#define se second
#define pb push_back
#define SET(a, b) memset(a, b, sizeof(a))
#define eps 1e-6
#define pi atan(1) * 4
#define mod 1000000007
#define inf 1000000000
#define llinf 1000000000000000000
#define	FOR(i, a, b, c) for (int i = a; i <= b; i += c)
using namespace std;
ll num[200005];
ll dp[200005][3];
map<pll, ll> freq;
int main () {
	ll n, k;
	scanf("%lld %lld", &n, &k);
	FOR(i, 1, n, 1) {
		scanf("%lld", &num[i]);
	}
	ll ans = 0;
	FOR(i, 1, n, 1) {
		dp[i][0] = 1;
		FOR(j, 1, 2, 1) dp[i][j] = 0;
		if (num[i] % k != 0) {
			freq[{num[i], 0}] += 1;
			continue;
		}
		
		FOR(j, 1, 2, 1) {
			if (num[i] % k != 0) break;
			dp[i][j] += freq[{num[i] / k, j - 1}];
		}
		FOR(j, 0, 2, 1) freq[{num[i], j}] += dp[i][j];
		ans += dp[i][2];
	}
	printf("%lld\n", ans);
	return 0;
}