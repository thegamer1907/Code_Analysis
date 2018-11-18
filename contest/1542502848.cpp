#include<bits/stdc++.h>
using namespace std;
const int M=1e5+5;
int n,A[M],cnt[M];
long long dp[25][M];
void solve(int l,int r,int L,int R,int K,long long sum) {
	if(l>r)return;
	int mid=l+r>>1,pos=-1;
	for(int i=l; i<=mid; i++) {
		sum+=cnt[A[i]];
		cnt[A[i]]++;
	}
	//printf("sum=%lld\n",sum);
	int p=min(mid,R);
	for(int i=L; i<=p; i++) {
		cnt[A[i]]--;
		sum-=cnt[A[i]];
		if(sum+dp[K-1][i]<dp[K][mid]) {
			pos=i;
			dp[K][mid]=sum+dp[K-1][i];
		}
	}
	for(int i=l; i<=mid; i++)sum-=--cnt[A[i]];
	for(int i=L; i<=p; i++)sum+=cnt[A[i]]++;
	solve(l,mid-1,L,pos,K,sum);
	for(int i=L; i<pos; i++)sum-=--cnt[A[i]];
	for(int i=l; i<=mid; i++)sum+=cnt[A[i]]++;
	solve(mid+1,r,pos,R,K,sum);
	for(int i=L; i<pos; i++)cnt[A[i]]++;
	for(int i=l; i<=mid; i++)cnt[A[i]]--;
}
int main() {
	int K;
	scanf("%d %d",&n,&K);
	memset(dp,63,sizeof(dp));
	for(int i=1; i<=n; i++)scanf("%d",&A[i]);
	dp[1][0]=0; 
	for(int i=1; i<=n; i++) {
		dp[1][i]=dp[1][i-1]+cnt[A[i]];
		cnt[A[i]]++;
	}
	for(int i=2; i<=K; i++) {
		memset(cnt,0,sizeof(cnt));
		solve(1,n,1,n,i,0);
		//printf("%d\n",i);
	}
	printf("%lld\n",dp[K][n]);
	return 0;
}