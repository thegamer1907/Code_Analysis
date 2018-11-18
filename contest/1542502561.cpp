#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a),i##_=(b);i<=i##_;i++)
#define Ror(i,a,b) for(int i=(a),i##_=(b);i>=i##_;i--)
#define LL long long 
#define M 100005
using namespace std;
int A[M],Cnt[M],l1=1,r1; 
LL dp[M][25],sum;
inline bool Min(LL &x,LL y){
	if(y<x){x=y;return 1;}
	return 0;
}
void Up(int l,int r){
	while(l1<l)sum-=--Cnt[A[l1]],l1++;
	while(l1>l)l1--,sum+=Cnt[A[l1]]++;
	while(r1<r)r1++,sum+=Cnt[A[r1]]++;
	while(r1>r)sum-=--Cnt[A[r1]],r1--;
}
void Solve(int l,int r,int L,int R,int k){
//	printf("l=%d r=%d L=%d R=%d l1=%d r1=%d sum=%lld\n",l,r,L,R,l1,r1,sum);
	if(l==r){
		Ror(i,min(r,R),L)Up(i+1,l),Min(dp[l][k],dp[i][k-1]+sum);
		//printf("dp[%d][%d]=%d\n",l,k,dp[l][k]);
		return;
	}
	int mid=(l+r)>>1,st=0;
	Ror(i,min(mid-1,R),L){
		Up(i+1,mid);
		if(Min(dp[mid][k],dp[i][k-1]+sum))st=i;
	}
	if(st)Solve(l,mid,L,st,k),Solve(mid+1,r,st,R,k);
	else Solve(mid+1,r,L,R,k);
}
int main(){
	int n,K;
	scanf("%d%d",&n,&K);
	For(i,1,n)scanf("%d",&A[i]);
	memset(dp,127,sizeof dp);
	dp[0][1]=0;
	For(i,1,n)dp[i][1]=dp[i-1][1]+Cnt[A[i]]++;
	memset(Cnt,0,sizeof Cnt);
	For(i,2,K)Solve(1,n,1,n,i);
	printf("%lld\n",dp[n][K]);
	return 0;
}