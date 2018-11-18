#include <bits/stdc++.h>
using namespace std;
typedef int64_t lld;
const lld INF = 1LL<<60;
const int N = 100000 + 5;
const int K = 20 + 2;

lld dp[K][N];
int arr[N], cnt[N];

lld cost(int l, int r){
	// 1-base [L, R]
	static int L = 1, R = 0;
	static lld ret = 0;
	while(L > l){
		ret += cnt[arr[--L]];
		cnt[arr[L]] += 1;
	}
	while(R < r){
		ret += cnt[arr[++R]];
		cnt[arr[R]] += 1;
	}
	while(L < l){
		cnt[arr[L]] -= 1;
		ret -= cnt[arr[L++]];
	}
	while(R > r){
		cnt[arr[R]] -= 1;
		ret -= cnt[arr[R--]];
	}
	return ret;
}
void dc(int,int,int,int,int);

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k; cin >> n >> k;
	for(int i=1;i<=n;i++) cin >> arr[i];
	for(int i=1;i<=n;i++) dp[0][i] = INF;
	for(int j=1;j<=k;j++) dc(1, n+1, 0, n, j);
	cout << dp[k][n] << '\n';
	return 0;
}

void dc(int l, int r, int a, int b, int j){
	// dp[l, r)[j] know transfer from [a, b)
	int mid = (l+r)>>1, ori = -1;
	dp[j][mid] = INF;
	for(int i=a;i<min(b, mid);i++){
		lld val = cost(i+1, mid);
		if(dp[j][mid] > dp[j-1][i]+val){
			dp[j][mid] = dp[j-1][i]+val;
			ori = i;
		}
	}
	if(r-l == 1) return;
	dc(l, mid, a, ori+1, j);
	dc(mid, r, ori, b, j);
}