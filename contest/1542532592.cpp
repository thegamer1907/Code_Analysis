#include<bits/stdc++.h>
#define N 200005
#define K 21
using namespace std;
long long dp[K][N],ans;int b[N],a[N],n,k,ll,rr;
inline void query(int l,int r){
	while (ll>l) ans+=b[a[--ll]],b[a[ll]]++;
	while (rr<r) ans+=b[a[++rr]],b[a[rr]]++;
	while (ll<l) b[a[ll]]--,ans-=b[a[ll++]];
	while (rr>r) b[a[rr]]--,ans-=b[a[rr--]];
}
void solve(int l,int r,int L,int R,int now){
	if (l>r||L>R) return;
	int mid=(l+r)>>1,pos=0;
	for (int i=L;i<=R&&i<=mid;i++){
		query(i,mid);
		if (dp[now-1][i-1]+ans<dp[now][mid]) dp[now][mid]=dp[now-1][i-1]+ans,pos=i;
	}
	//printf("%d\n",dp[now][mid]);
	solve(l,mid-1,L,pos,now);solve(mid+1,r,pos,R,now);
}
int main(){
	scanf("%d%d",&n,&k);
	memset(dp,63,sizeof(dp));
	ll=1;rr=dp[0][0]=0;
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=k;i++) solve(1,n,1,n,i);
	printf("%lld\n",dp[k][n]);
	return 0;
}