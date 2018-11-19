#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

const int MAX_N = 1e5 + 5;
const int MAX_K = 20 + 5;
const ll INF = (ll) 0x3F3F3F3F3F3F3F3F;
ll dp[MAX_K][MAX_N];
int opt[MAX_K][MAX_N], arr[MAX_N], app[MAX_N];
int N, K, L = 1, R = 0;
ll cost = 0;

void update_ptrs(int l, int r) {
	while(R > r) {
		app[arr[R]]--;
		cost -= app[arr[R]];
		R--;
	}
	while(r > R) {
		cost += app[arr[R + 1]];
		app[arr[R + 1]]++;
		R++;
	}
	while(L > l) {
		cost += app[arr[L - 1]];
		app[arr[L - 1]]++;	
		L--;
	}
	while(l > L) {
		app[arr[L]]--;
		cost -= app[arr[L]];
		L++;
	}
}

inline void solve(int segments, int pos, int opt_left, int opt_right) {
	int limit = min(pos, opt_right + 1);
	fori(i, opt_left, limit) {
		update_ptrs(i + 1, pos);
		if(dp[segments][pos] > dp[segments - 1][i] + cost) {
			dp[segments][pos] = dp[segments - 1][i] + cost;
			opt[segments][pos] = i;
		}
	}
}

void roll(int segments, int left, int right, int opt_left, int opt_right) {
	if(left <= right) {
		int mid = (left + right) / 2;
		solve(segments, mid, opt_left, opt_right);
		roll(segments, left, mid - 1, opt_left, opt[segments][mid]);
		roll(segments, mid + 1, right, opt[segments][mid], opt_right);
	}
}

int main() {
	scanf("%d %d", &N, &K);
	K = min(N, K);
	fori(i, 1, N + 1) {
		scanf("%d", arr + i);
	}

	memset(dp, 0x3F, sizeof dp);
	dp[0][0] = 0;
	fori(i, 1, K + 1) {
		roll(i, i, N, i - 1, N); 
	}

	printf("%lld\n", dp[K][N]);

	return 0;
}

