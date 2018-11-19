#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define f first
#define s second
#define fr freopen("in.txt","r",stdin)
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>
ll INF = 1e18;
int ptrl=1;
int ptrr=0;
ll curval = 0;
int a[100011];
int cnt[100011];
ll dp[2][100011];
void go(int l,int r) {
	while(ptrl > l) {
		ptrl--;
		curval += cnt[a[ptrl]];
		cnt[a[ptrl]]++;
	}
	while(ptrr<r) {
		ptrr++;
		curval += cnt[a[ptrr]];
		cnt[a[ptrr]]++;	
	}
	while(ptrl<l) {
		cnt[a[ptrl]]--;
		curval -= cnt[a[ptrl]];
		ptrl++;
	}
	while(ptrr>r) {
		cnt[a[ptrr]]--;
		curval -= cnt[a[ptrr]];
		ptrr--;
	}
}

void compute(int k,int l,int r,int opl,int opr) {
	if(l > r) return;
	int mid = (l+r)/2;

	dp[k][mid] = INF;
	int op;
	for(int i=opl;i<=min(opr,mid);i++) {
		go(i, mid);
		if(dp[k][mid] > dp[k^1][i-1]+curval) {
			dp[k][mid] = dp[k^1][i-1]+curval;
			op = i;
		}
	}
	compute(k,l,mid-1,opl,op);
	compute(k,mid+1,r,op,opr);
}
int main() {
	int n,k;
	cin >> n >> k;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
	}
	rep(j,n+1) {
		dp[0][j] = INF;
	}
	dp[0][0] = 0;
	for(int ki=1;ki<=k;ki++) {
		compute(ki%2,1,n,1,n);
	}
	cout << dp[k%2][n];
}