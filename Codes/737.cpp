#include <bits/stdc++.h>

#define rep(i, a, b) for (i = (a); i <= (b); i ++)

using namespace std;

typedef long long ll;

const int maxn = 11, maxm = 11;

int K;
int bit[maxn];
int dp[maxn][maxm];

int calc(ll x) {
	int i, j, k, res = 0, len, tot;
	ll y;
	for (y = x, len = 0; y; bit[++ len] = y % 10, y /= 10);
	for (i = len, tot = 10; i > 1; i --) {
		rep(j, 0, bit[i] - 1) {
			if (j > tot) {
				break;
			}
			res += dp[i - 1][tot - j];
		}
		tot -= bit[i];
		if (tot <= 0) {
			break;
		}
	}
	return res + (tot >= 0 && tot <= bit[1]);
}

int main() {
	int i, j, k;
	ll l, r, mid;
	rep(i, 0, 9) {
		dp[1][i] = 1;
	}
	rep(i, 1, 10) {
		rep(j, 0, 10) {
			rep(k, 0, 9) {
				if (k > j) {
					break;
				}
				dp[i][j] += dp[i - 1][j - k];
			}
		}
	}
	scanf("%d", &K);
	l = 18;
	r = 1111111111;
	for (; l + 1 < r; ) {
		mid = (l + r) >> 1;
		if (calc(mid) >= K) {
			r = mid;
		}
		else {
			l = mid;
		}
	}
	printf("%I64d", r);
	return 0;
}
