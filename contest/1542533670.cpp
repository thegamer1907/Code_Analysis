#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> PI;
const int MAX_N=100000+10;
int c[MAX_N],cnt[MAX_N],l,r;
ll dp[MAX_N][25],cost;
void init(){
	memset(cnt,0,sizeof cnt);
	l=1,r=0;
	cost=0;
}
void move_to(int ql,int qr){
	if(r<=qr){
		for(int i=r+1;i<=qr;i++)
			cost+=cnt[c[i]]++;
	}else{
		for(int i=r;i>qr;i--)
			cost-=--cnt[c[i]];
	}
	r=qr;
	if(l<=ql){
		for(int i=l;i<ql;i++)
			cost-=--cnt[c[i]];
	}else{
		for(int i=l-1;i>=ql;i--)
			cost+=cnt[c[i]]++;
	}
	l=ql;
}
void solve(int l,int r,int st,int ed,int k){
	if(l>r) return;
	int mid=(l+r)>>1,p;
	for(int i=st;i<=min(ed,mid);i++){
		move_to(i,mid);
		if(dp[i-1][k-1]+cost<=dp[mid][k]){
			dp[mid][k]=dp[i-1][k-1]+cost;
			p=i;
		}
	}
	solve(l,mid-1,st,p,k);
	solve(mid+1,r,p,ed,k);
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
		scanf("%d",c+i);
	init();
	for(int i=1;i<=n;i++){
		move_to(1,i);
		dp[i][1]=cost;
		for(int j=2;j<=k;j++)
			dp[i][j]=1LL<<62;
	}
	for(int j=2;j<=k;j++)
		solve(1,n,1,n,j);
	move_to(2,3);
	printf("%lld\n",dp[n][k]);
	return 0;
}