#include <bits/stdc++.h>

using namespace std;

#define W(x) cerr << "\033[31m" << #x << "=" << x << "\033[0m" << "\n";
#define inf numeric_limits<int>::max()

int dp[101][3];
int v[101];

int f (int idx, int status) {
	if (idx < 0) {
		return status > 0 ? 0 : -inf;
	}

	if (dp[idx][status] != -1) {
		return dp[idx][status];
	}

	if (status == 0) {
		auto ans = max(
			f(idx-1, status+1) + (v[idx] == 0),
			f(idx-1, status) + (v[idx] == 1)
		);
		return dp[idx][status] = ans;
	} else if (status == 1) {
		auto ans = max(
			f(idx-1, status+1) + (v[idx] == 1),
			f(idx-1, status) + (v[idx] == 0)
		);
		return dp[idx][status] = ans;
	} else {
		return dp[idx][status] = f(idx-1, status) + (v[idx] == 1);
	}
}

int main () {
	int n;

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 3; j++) {
			dp[i][j] = -1;
		}
	}

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	printf("%d\n", f(n-1, 0));
}