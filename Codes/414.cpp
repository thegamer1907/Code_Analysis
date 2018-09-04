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
#define FOR(i, a, b, c) for (int i = (a); i <= (b); i += (c))
#define FORD(i, a, b, c) for (int i = (a); i >= (b); i -= (c))
#define FORl(i, a, b, c) for (ll i = (a); i <= (b); i += (c))
#define FORDl(i, a, b, c) for (ll i = (a); i >= (b); i -= (c))
using namespace std;
int gk;
int memo[12][105];
int now;
int dp (int sum, int dig) {
	if (dig == 1) {
		if (sum <= 9) return memo[sum][dig] = 1;
		else return memo[sum][dig] = 0;
	}
	if (memo[sum][dig] != -1) return memo[sum][dig];
	int tot = 0;
	FOR(i, 0, 9, 1) {
		if (dig == now && i == 0) continue;
		if (sum < i) break;
		tot += dp(sum - i, dig - 1);
	}
	return memo[sum][dig] = tot;
}
vector<int> num;
void trace (int sum, int dig, int rem) {
	if (dig == 1) {
		num.pb(sum);
		for (auto d : num) printf("%d", d);
		printf("\n");
		return;
	}
	FOR(i, 0, 9, 1) {
		if (dig == now && i == 0) continue;
		int n = memo[sum - i][dig - 1];
		if (rem > n) {
			rem -= n; continue;
		}
		num.pb(i);
		trace(sum - i, dig - 1, rem);
		return;
	}
}
int main () {
	scanf("%d", &gk);
	FOR(i, 1, inf, 1) {
		now = i; SET(memo, -1);
		int n = dp(10, i);
		if (gk <= n) {
			trace(10, i, gk);
			return 0;
		}
		gk -= n;
	}
	return 0;
}