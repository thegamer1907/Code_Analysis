#include<bits/stdc++.h>
#define ll long long
#define M 100005
using namespace std;
int n,K,A[M],L,R;
ll dp[2][M],cnt[M],now;
void solve(int l1,int r1,int l2,int r2){
	if(l1>r1)return;
	int mid=(l1+r1)/2,w=min(r2,mid);
	ll mv=1e18;
	while(R<mid)R++,now+=cnt[A[R]],cnt[A[R]]++;
	while(L>w+1)L--,now+=cnt[A[L]],cnt[A[L]]++;
	while(R>mid)cnt[A[R]]--,now-=cnt[A[R]],R--;
	while(L<w+1)cnt[A[L]]--,now-=cnt[A[L]],L++;
	for(int i=w;i>=l2;i--){
		L--;now+=cnt[A[L]];cnt[A[L]]++;
		if(now+dp[0][i-1]<mv)mv=now+dp[0][i-1],w=i;
	}
	dp[1][mid]=mv;
	solve(l1,mid-1,l2,w);
	solve(mid+1,r1,w,r2);
}
int main(){
	scanf("%d%d",&n,&K);
	for(int i=1;i<=n;i++)scanf("%d",&A[i]);
	memset(dp[0],127,sizeof dp[0]);
	dp[0][0]=0;
	for(int i=1;i<=K;i++){
		now=0;L=1;R=0;
		memset(cnt,0,sizeof cnt);
		solve(i,n,i,n);
		memcpy(dp[0],dp[1],sizeof dp[0]);
	}
	printf("%lld\n",dp[0][n]);
	return 0;
}