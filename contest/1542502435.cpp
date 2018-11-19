// In The Name Of God
#include <iostream>
#include <string.h>
#include <algorithm>
#include <set>
#include <vector>
#include <climits>
#include <map>
#include <queue>
#include <math.h>
#include <iomanip>

#define sqr(A) ((A) * (A))
#define F first
#define S second
#define MP make_pair
#define bsz  __builtin_popcount
#define all(A) A.begin(), A.end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;
const int MOD2 = 1e9 + 9;
const int PR = 727;
const int INF = INT_MAX;
const ll LINF = LLONG_MAX;

const int N = 1e5 + 20;
const int K = 21;
ll dp[N][K], n, k, a[N], cnt[N], res, lf = 1, rg = 0;

void go(int l, int r) {
	while (lf > l) res += cnt[a[--lf]]++;
	while (rg < r) res += cnt[a[++rg]]++;
	while (lf < l) res -= --cnt[a[lf++]];
	while (rg > r) res -= --cnt[a[rg--]];
}

void solve(int j, int ilf, int irg, int klf, int krg) {
	if (ilf > irg) return ;
	int imid = (ilf + irg) / 2, kmid = 0;
	for (int i = klf; i <= min(imid, krg); i++) {
		go(i, imid);
		if (res + dp[i - 1][j - 1] < dp[imid][j]) {
			dp[imid][j] = res + dp[i - 1][j - 1];
			kmid = i;
		}
	}
	if (ilf <= imid - 1)
		solve(j, ilf, imid - 1, klf, kmid);
	if (imid + 1 <= irg)
		solve(j, imid + 1, irg, kmid, krg);
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	memset(dp, 63, sizeof dp);
	dp[0][0] = 0;
	for (int j = 1; j <= k; j++) {
		go(1, 0);
		solve(j, 1, n, 1, n);
	}
	cout << dp[n][k] << endl;
}
