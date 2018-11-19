#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define repn(i,e) for(int i = 0; i < e; i++)
#define repsn(i,s,e) for(int i = s; i < e; i++)
#define rrepn(i,s) for(int i = s; i >= 0; i--)
#define rrepsn(i,s,e) for(int i = s; i >= e; i--)

inline void fastio(int debug) {
	if(debug) {
		cout << "DEBUGGING MODE..." << endl;
		freopen("in","r",stdin);
	} else {
		ios_base::sync_with_stdio(false), cin.tie(0);
	}
}

#define MAX_N 100005
#define MAX_K 22

const ll oo = 1e12;
int n, k, a[MAX_N], L, R;
ll dp[MAX_K][MAX_N], cost, dat[MAX_N];

void work(int l, int r) {
	while(L > l) cost += dat[a[--L]], dat[a[L]]++;
	while(R < r) cost += dat[a[++R]], dat[a[R]]++;
	while(L < l) cost -= (dat[a[L]]-1), dat[a[L]]--, L++;
	while(R > r) cost -= (dat[a[R]]-1), dat[a[R]]--, R--;
}

void solve(int i, int l, int r, int cl, int cr) {
	if(l > r) return;

	int mid = (l + r) >> 1, opt = -1;
	dp[i][mid] = oo;

	repsn(k,cl,min(mid-1,cr)+1) {
		work(k+1,mid);
		ll newCost = dp[i-1][k] + cost;
		if(newCost < dp[i][mid]) {
			dp[i][mid] = newCost;
			opt = k;
		}
	}
	solve(i,l,mid-1,cl,opt);
	solve(i,mid+1,r,opt,cr);
}

int main(void) {
	fastio(0);
	cin >> n >> k;
	L = 1, R = 0;
	repsn(i,1,n+1) {
		cin >> a[i];
	}
	repsn(j,1,n+1) {
		work(1,j);
		dp[1][j] = cost;
	}
	repsn(i,2,k+1) solve(i,1,n,1,n);
	cout << dp[k][n] << "\n";
	return 0;
}
