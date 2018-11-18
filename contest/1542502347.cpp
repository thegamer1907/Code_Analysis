#include <bits/stdc++.h>

using namespace std;

#define len(x) ((int)(x).size())
#define x first
#define y second

using ll = long long;
using llu = unsigned long long;
using ld = long double;

const int N = 1e5 + 10, K = 25;

int n, k;
int a[N];
int cnt[N], cur_l = 1, cur_r;
ll cur_cost;

void add(int i){
	cur_cost += cnt[a[i]];
	cnt[a[i]]++;
}

void rmv(int i){
	cnt[a[i]]--;
	cur_cost -= cnt[a[i]];
}

ll cost(int l, int r){
	while(cur_l < l) rmv(cur_l++);
	while(cur_l > l) add(--cur_l);
	while(cur_r < r) add(++cur_r);
	while(cur_r > r) rmv(cur_r--);
	return cur_cost;
}

ll dp[N][K];

void solve(int qtd, int l, int r, int opt_l, int opt_r){
	if(l > r) return;
	
	int i = (l + r)/2, opt = -1;
	ll &cur = dp[i][qtd] = 1e18;
	for(int j = opt_l; j <= opt_r && j <= i; j++){
		ll c = cost(j, i);
		if(dp[j - 1][qtd - 1] + c < cur){
			opt = j, cur = dp[j - 1][qtd - 1] + c;
		}
	}
	assert(opt != -1);
	solve(qtd, l, i - 1, opt_l, opt);
	solve(qtd, i + 1, r, opt, opt_r);
}

int main(){
	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i++){
		dp[i][0] = 1e18;
	}
	for(int j = 1; j <= k; j++){
		solve(j, 1, n, 1, n);
	}
	printf("%lld\n", dp[n][k]);
	return 0;
}
