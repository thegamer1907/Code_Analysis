#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair < int, int > ii;

const int N = 1e5 + 5;

int n, k;
int a[N], cnt[N];
ll cur, dp[N], dp2[N];
int L = 1, R = 0;

void add(int i) {
	// printf("i = %d cur = %d newCur = %d\n", i, cur, cur + cnt[a[i]]);
	cur += cnt[a[i]];
	cnt[a[i]]++;
}

void del(int i) {
	cnt[a[i]]--;
	// printf("---i = %d cur = %d newCur = %d\n", i, cur, cur - cnt[a[i]]);
	cur -= cnt[a[i]];
}

void fit(int l, int r) {
	// printf("L = %d R = %d cur = %d\n", L, R, cur);
	while(R < r)
		add(++R);
	while(R > r)
		del(R--);
	while(L > l)
		add(--L);
	while(L < l)
		del(L++);
	// printf("l = %d r = %d\n", l, r);
	// printf("L = %d R = %d cur = %d\n", L, R, cur);
	// exit(0);
}

void solve(int l, int r, int optL, int optR) {
	if(l > r)
		return;
	int m = (l + r) / 2;
	dp[m] = -1;
	int opt = optR;
	for(int i = min(m, optR); i >= optL; i--) {
		fit(i, m);
		// printf("i = %d m = %d cur = %d\n", i, m, cur);
		if(dp[m] == -1 or cur + dp2[i - 1] < dp[m]) {
			dp[m] = cur + dp2[i - 1];
			opt = i;
		}
	}
	solve(l, m - 1, optL, opt);
	solve(m + 1, r, opt, optR);
}

int main() {

// #ifdef D
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
// #endif

	scanf("%d %d", &n, &k);

	for(int i = 1; i <= n; i++)
		scanf("%d", a + i);

	for(int i = 1; i <= n; i++)
		dp2[i] = 1e18;

	for(int i = 1; i <= k; i++) {
		solve(1, n, 1, n);
		// for(int i = 1; i <= n; i++)
			// printf("%d ", dp[i]);
		// puts("");
		for(int i = 1; i <= n; i++)
			dp2[i] = dp[i];
	}

	printf("%lld\n", dp[n]);

    return 0;

}

