#include<cstdio>

int n, x[100005], h[100005], dp[100005][3];

int max(int x, int y) {
	return x > y ? x : y;
}

int max(int x, int y, int z) {
	return max(max(x, y), z);
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &x[i], &h[i]);
	}
	x[0] = -1000000001, h[0] = 0;
	x[n+1] = 2000000001;
	for (int i = 1; i <= n; i++) {
		dp[i][0] = max(dp[i-1][0], dp[i-1][1], dp[i-1][2]);
		if (x[i-1] + h[i-1] < x[i] - h[i]) {
			dp[i][1] = max(dp[i-1][0], dp[i-1][1], dp[i-1][2]) + 1;
		} else if (x[i-1] < x[i] - h[i]) {
			dp[i][1] = max(dp[i-1][0], dp[i-1][1]) + 1;
		} else {
			dp[i][1] = -1e9;
		}
		if (x[i] + h[i] < x[i + 1]) {
			dp[i][2] = max(dp[i-1][0], dp[i-1][1], dp[i-1][2]) + 1;
		} else {
			dp[i][2] = -1e9;
		}
	}
	printf("%d\n", max(dp[n][0], dp[n][1], dp[n][2]));
}