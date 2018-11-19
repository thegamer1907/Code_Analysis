#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;
const int maxk = 21;
const int maxn = 100100;
int cnt[maxn], L, R;
long long res;
long long dp[maxk][maxn];
int arr[maxn], n, k;
void expandL(){
	L--;
	res += cnt[arr[L]];
	cnt[arr[L]]++;
}
void reduceL(){
	cnt[arr[L]]--;
	res -= cnt[arr[L]];
	L++;
}
void expandR(){
	R++;
	res += cnt[arr[R]];
	cnt[arr[R]]++;
}
void reduceR(){
	cnt[arr[R]]--;
	res -= cnt[arr[R]];
	R--;
}
void putInterval(int l, int r){
	while(L > l) expandL();
	while(R < r) expandR();
	while(L < l) reduceL();
	while(R > r) reduceR();
}
void solve(int layer, int l, int r, int from, int to){
	if(l > r) return;
	int mid = (l + r)>>1;
	long long ans = 1ll<<60;
	int opt = from;
	for(int now = from; now <= to; now++){
		if(now >= mid) break;
		putInterval(now + 1, mid);
		if(dp[layer-1][now] + res <= ans){
			ans = dp[layer-1][now] + res;
			opt = now;
		}
	}
	dp[layer][mid] = ans;
	solve(layer, mid + 1, r, opt, to);
	solve(layer, l, mid - 1, from, opt);
}
int main(){
	scanf("%d %d", &n, &k);
	for(int e = 1; e <= n; e++)
		scanf("%d", arr + e);
	L = 1; R = 0;
	for(int e = 1; e <= n; e++){
		expandR();
		dp[0][e] = res;
	}
	for(int e = 1; e < k; e++)
		solve(e, 1, n, 0, n);
	cout << dp[k-1][n] << endl;
	return 0;
}
