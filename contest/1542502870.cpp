#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#include<vector>
#include<set>
#include<cstring>
#include<string>
#include<assert.h>
#include<bitset>
#include<cmath>
using namespace std;
#define FOR(i,a,b) for(int i=(a),i_##END_=(b);i<=i_##END_;++i)
#define REP(i,a,b) for(int i=(a),i_##END_=(b);i>=i_##END_;--i)
#define INF 1e9+7
#define debug() cerr<<"Why So Serious?"<<endl
#define M 100005
#define N 10005
#define eps (1e-7)
typedef long long ll;
typedef double db;
int n,k,A[M];
int Cnt[M];
ll dp[M][2];
void dfs(int L,int R,int l,int r,int p,ll sum){
	if(L>R)return;
	int mid=(L+R)>>1;
	FOR(i,L,mid)sum+=Cnt[A[i]]++;
	int lim=min(mid,r),pos=-1;
	FOR(i,l,lim){
		sum-=--Cnt[A[i]];
		if(dp[mid][p]>dp[i][p^1]+sum)
			pos=i,dp[mid][p]=dp[i][p^1]+sum;
	}
	FOR(i,L,mid)sum-=--Cnt[A[i]];
	FOR(i,l,lim)sum+=Cnt[A[i]]++;
	dfs(L,mid-1,l,pos,p,sum);
	FOR(i,l,pos-1)sum-=--Cnt[A[i]];
	FOR(i,L,mid)sum+=Cnt[A[i]]++;
	dfs(mid+1,R,pos,r,p,sum);
	FOR(i,l,pos-1)Cnt[A[i]]++;
	FOR(i,L,mid)Cnt[A[i]]--;
}
int main(){
	scanf("%d%d",&n,&k);
	FOR(i,1,n){
		scanf("%d",&A[i]);
		dp[i][0]=dp[i-1][0]+Cnt[A[i]];
		Cnt[A[i]]++;
	}
	FOR(i,2,k){
//		FOR(j,1,n)printf("dp[%d][%d]=%lld\n",j,i%2,dp[j][i%2]);
		FOR(j,1,n)Cnt[j]=0,dp[j][(i+1)%2]=1e18;
		dfs(1,n,1,n,(i+1)%2,0);
	}
	printf("%lld\n",dp[n][(k+1)%2]);
	return 0;
}