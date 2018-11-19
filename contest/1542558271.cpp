#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <string>
#include <time.h>
#include <queue>
#define last(x, y) (x)[(x).size() - y]
#define endl '\n'
#define flush fflush(stdout), cout.flush()
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug cout << "ok" << endl
#define in(X) ((X) - '0')
typedef long long ll;
typedef long double ldb;
const int md = 1e9 + 7;
const ll hs = 199;
const ldb eps = 1e-7, pi = acos(-1);
using namespace std;

int n, k, a[100004];
int st = 0, en = -1, c[100004];
ll val = 0, dp[20][100004];

ll cost(int l, int r) {
	while (en < r) val += c[a[++en]]++;
	while (st > l) val += c[a[--st]]++;
	while (en > r) val -= --c[a[en--]];
	while (st < l) val -= --c[a[st++]];
	return val;
}

void calc(int ind, int l, int r, int opl, int opr) {
	if (l > r) return;

	int md = (l + r) / 2, piv = opl, lim = min(md, opr + 1);
	ll x, mn = dp[ind - 1][opl] + cost(opl + 1, md);
	for (int i = opl + 1, lim = min(md, opr + 1); i < lim; i++) {
		x = dp[ind - 1][i] + cost(i + 1, md);
		if (x < mn)
			mn = x, piv = i;
	}
	dp[ind][md] = mn;
	calc(ind, l, md - 1, opl, piv);
	calc(ind, md + 1, r, piv, opr);
}

int main() {
	fast;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i], --a[i], c[i] = 0;
	for (int i = 0; i < n; i++)
		dp[0][i] = cost(0, i);
	for (int i = 1; i < k; i++)
		calc(i, i, n - 1, i - 1, n - 2);
	cout << dp[k - 1][n - 1] << endl;
}