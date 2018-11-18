#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a),i##_end_=(b);i<=i##_end_;i++)
#define DOR(i,a,b) for(int i=(a),i##_end_=(b);i>=i##_end_;i--)
#define ll long long
#define M 100005
#define N 25
#define INF 2e16
using namespace std;

int n,m;
int A[M];
int posL,posR;

ll now;
ll cnt[M];
ll dp[2][M];

void solve(int L,int R,int l,int r){
	if(L>R)return;
	int mid=(L+R)>>1;
	int pos=min(mid,r);
	ll Max=INF;
	while(posR<mid)posR++,now+=cnt[A[posR]],cnt[A[posR]]++;
	while(posL>pos+1)posL--,now+=cnt[A[posL]],cnt[A[posL]]++;
	while(posR>mid)cnt[A[posR]]--,now-=cnt[A[posR]],posR--;
	while(posL<pos+1)cnt[A[posL]]--,now-=cnt[A[posL]],posL++;
	DOR(i,pos,l){
		posL--;
		now+=cnt[A[posL]];
		cnt[A[posL]]++;
		if(now+dp[0][i-1]<Max)Max=now+dp[0][i-1],pos=i;
	}
	dp[1][mid]=Max;
	solve(L,mid-1,l,pos);
	solve(mid+1,R,pos,r);
}

int main(){
	scanf("%d%d",&n,&m);
	FOR(i,1,n)scanf("%d",&A[i]);
	FOR(i,0,1){
		FOR(j,0,n){
			dp[i][j]=INF;
		}
	}
	dp[0][0]=0;
	FOR(i,1,m){
		now=0;
		posL=1,posR=0;
		memset(cnt,0,sizeof(cnt));
		solve(1,n,1,n);
		memcpy(dp[0],dp[1],sizeof(dp[1]));
	}
	printf("%lld\n",dp[0][n]);
	return 0;
}
