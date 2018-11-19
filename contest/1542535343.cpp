#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int MAXN = 1 << 17;
const ll INF = 0x0101010101010101;

#define debug(...) fprintf(stderr, __VA_ARGS__)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define fillchar(a, s) memset((a), (s), sizeof(a))

ll cho2 (ll x) {
	return x * (x - 1) / 2;
}

int N, K;
int A[MAXN];
ll dp[22][MAXN];
int cnt[MAXN], intlt = 1, intrt;
ll csum;

void addcnt (int x, int v) {
	csum -= cho2(cnt[x]);
	cnt[x] += v;
	csum += cho2(cnt[x]);
}

ll getsum (int lt, int rt) {
	//try expanding before deleting
	while (intlt > lt) {
		//decrement then add
		intlt--;
		addcnt(A[intlt], 1);
	}
	while (intlt < lt) {
		//delete then increment
		addcnt(A[intlt], -1);
		intlt++;
	}

	while (intrt > rt) {
		//delete then decrement
		addcnt(A[intrt], -1);
		intrt--;
	}
	while (intrt < rt) {
		//increment then add
		intrt++;
		addcnt(A[intrt], 1);
	}
	return csum;
}

void rec (int cur, int clt, int crt, int olt, int ort) {
	if (clt > crt) {
		return;
	}
	int cmid = (clt + crt) / 2;
	ll &ref = dp[cur][cmid];
	int oi = -1;
	int ilt = olt, irt = min(ort, cmid - 1);
	//irt + 1 to cmid

	for (int i = irt; i >= ilt; i--) {
		ll pdp = dp[cur - 1][i];
		if (pdp != INF) {
			pdp += getsum(i + 1, cmid);
		}
		if (ref > pdp) {
			ref = pdp;
			oi = i;
		}
	}

	rec(cur, clt, cmid - 1, olt, oi);
	rec(cur, cmid + 1, crt, oi, ort);
}

int main() {
	scanf("%d %d", &N, &K);
	//dp[i][j] = max(dp[i - 1][k] + #distinct(k + 1, j))
	for (int i = 1; i <= N; i++) {
		scanf("%d", &A[i]);
	}

	fillchar(dp, 1);
	dp[0][0] = 0;
	for (int i = 1; i <= K; i++) {
		rec(i, i, N, 0, N);
	}
	printf("%lld\n", dp[K][N]);
}
