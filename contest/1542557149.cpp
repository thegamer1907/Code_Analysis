#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll MOD = 1000000007LL;
#define MAXN 100100
#define pb push_back
#define INF 10000000000000LL;

ll dp[2][MAXN];
ll CUSTO = 0LL;
int freq[MAXN];
int L, R;
int v[MAXN];

ll adjust(int l, int r){
	while (R <= r)
	{
		CUSTO += freq[v[R]];
		freq[v[R]]++;
		R++;
	}
	while (R > r+1)
	{
		R--;
		freq[v[R]]--;
		CUSTO -= freq[v[R]];
	}
	
	while (L < l)
	{
		freq[v[L]]--;
		CUSTO -= freq[v[L]];
		L++;
	}
	
	while (L > l)
	{
		L--;
		CUSTO += freq[v[L]];
		freq[v[L]]++;
	}
	
	//~ printf("custo (%d, %d) = %lld\n", l, r, CUSTO);
}

void solve(int K, int l, int r, int optL, int optR){
	if(l > r) return;
	int mid = (l+r)/2;
	int opt = -1;
	dp[K&1][mid] = INF;
	
	int lim = min(mid-1, optR);
	for (int i = optL; i <= lim; i++)
	{
		adjust(i+1, mid);
		if(dp[(K-1)&1][i] + CUSTO < dp[K&1][mid]){
			opt = i;
			dp[K&1][mid] = dp[(K-1)&1][i] + CUSTO;
		}
	}
	
	solve(K, l, mid-1, optL, opt);
	solve(K, mid+1, r, opt, optR);
}

int main(){
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	
	L = 1;
	R = 1;
	
	for (int i = 1; i <= n; i++)
	{
		adjust(1, i);
		dp[1][i] = CUSTO;
	}
	
	for (int i = 2; i <= k; i++)
	{
		solve(i, 1, n, 1, n);
	}
	cout << dp[k&1][n] << "\n";
	
	
	return 0;
}
