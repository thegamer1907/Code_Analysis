#include <bits/stdc++.h>

#define For(i, a, b) for (int i = a, i##end = b; i <= i##end; ++ i)
#define FOR(i, a, b) for (int i = a, i##end = b; i < i##end; ++ i)
#define Rep(i, a, b) for (int i = a, i##end = b; i >= i##end; -- i)
#define REP(i, a, b) for (int i = a, i##end = b; i > i##end; -- i)
#define chkmax(a, b) ((a) < (b) ? (a) = (b) : (a))
#define chkmin(a, b) ((a) > (b) ? (a) = (b) : (a))
#define mymax(a, b) ((a) < (b) ? (b) : (a))
#define mymin(a, b) ((a) > (b) ? (b) : (a))
#define myabs(a) ((a) > 0 ? (a) : -(a))

typedef long long LL;

const int INF = 0X3F3F3F3F;
const LL INF_LL = 0X3F3F3F3F3F3F3F3FLL;
const double EPS = 1E-10;

#define DEBUG(...) fprintf(stderr, __VA_ARGS__)
#define OK DEBUG("Passing [%s] in LINE %d...\n", __FUNCTION__, __LINE__)

#define F first
#define S second

#define IL __inline__ __attribute__((always_inline))

/*************************header*************************/

const int MAXN = 100000 + 5, MAXM = 20 + 5;

int arr[MAXN], num[MAXN], cur_l, cur_r;
LL ans;
LL dp[MAXM][MAXN];

void Solve(int t, int l, int r, int a, int b) {
	if (l > r)
		return;
	int mid = (l + r) >> 1;
	while (cur_l < a)
		-- num[arr[cur_l]], ans -= num[arr[cur_l]], ++ cur_l;
	while (cur_l > a)
		-- cur_l, ans += num[arr[cur_l]], ++ num[arr[cur_l]];
	while (cur_r < mid)
		++ cur_r, ans += num[arr[cur_r]], ++ num[arr[cur_r]];
	while (cur_r > mid)
		-- num[arr[cur_r]], ans -= num[arr[cur_r]], -- cur_r;
	int &cur = cur_l, k = ans;
	For(i, a, b) {
		if (dp[t - 1][i - 1] + ans < dp[t - 1][cur - 1] + k)
			cur = i, k = ans;
		-- num[arr[i]], ans -= num[arr[i]];
	}
	Rep(i, b, cur)
		ans += num[arr[i]], ++ num[arr[i]];
	dp[t][mid] = dp[t - 1][cur - 1] + ans;
	Solve(t, l, mid - 1, a, cur);
	Solve(t, mid + 1, r, cur, b);
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	For(i, 1, n) {
		scanf("%d", &arr[i]);
		dp[1][i] = dp[1][i - 1] + num[arr[i]];
		++ num[arr[i]];
	}
	For(i, 2, m) {
		memset(num, 0, sizeof num);
		cur_l = 1, cur_r = 0, ans = 0;
		Solve(i, 1, n, 1, n);
	}
	std::cout << dp[m][n] << std::endl;
	return 0;
}
