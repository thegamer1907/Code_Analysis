#include <bits/stdc++.h>
#define LL long long
using namespace std;

const int MAXN = 1e5 + 10;
const int MAXK = 21;
const LL INF = 1e14;

int n, k, arr[MAXN];
int ptr[MAXK];
LL cnt[MAXN];
LL dp[MAXK][MAXN];

struct state {
	int L, R, c_l, c_r;
};

void go(int layer) {
	LL cost = 0;
	auto add = [&](int idx) -> LL {
		return cost += cnt[arr[idx]]++;
	};
	auto rem = [&](int idx) -> LL  {
		return cost -= --cnt[arr[idx]];
	};
	queue<state> q;
	q.push({1, n, 1, n});
	while(q.size()) {
		int size = q.size();
		int curr_l = 1, curr_r = 0;
		memset(cnt, 0, sizeof cnt);
		cost = 0;
		while(size--) {
			state f = q.front();
			q.pop();
			int mid = (f.L + f.R) / 2, q_l = f.c_l, q_r = min(f.c_r, mid - 1);
			while(curr_l > q_l) add(--curr_l);
			while(curr_r < mid) add(++curr_r);
			while(curr_l < q_l) rem(curr_l++);
			int idx = -1;
			for(int x = q_l; x <= q_r; x++) {
				rem(x), curr_l++;
				if(dp[layer - 1][x] + cost < dp[layer][mid])
					dp[layer][mid] = dp[layer - 1][x] + cost, idx = x;
			}
			if(f.L <= mid - 1) {
				q.push({f.L, mid - 1, f.c_l, idx});
			}
			if(f.R > mid) {
				q.push({mid + 1, f.R, idx, f.c_r});
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	fill(&dp[0][0], &dp[0][0] + MAXK*MAXN, INF);
	dp[1][1] = 0;
	cnt[arr[1]]++;
	for(int i = 2; i <= n; i++) {
		dp[1][i] = dp[1][i - 1] + cnt[arr[i]]++;
	}
	memset(cnt, 0, sizeof cnt);
	for(int layer = 2; layer <= k; layer++) {
		go(layer);
	}
	printf("%lld\n", dp[k][n]);
	return 0;
}
