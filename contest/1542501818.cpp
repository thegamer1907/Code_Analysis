#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int n,k,b,a[N],c[N];
long long dp[2][N];
void sol(int l,int r,int pl,int pr,long long s)
{
	if(l>r)return;
	int mid=l+r>>1,p=0;
	for(int i=l;i<=mid;i++)s+=c[a[i]]++;
	for(int i=pl;i<=pr&&i<=mid;i++)
	{
		s-=(--c[a[i]]);
		if(dp[b^1][i]+s<dp[b][mid])p=i,dp[b][mid]=s+dp[b^1][i];
	}
	for(int i=pl;i<=pr&&i<=mid;i++)s+=c[a[i]]++;
	for(int i=l;i<=mid;i++)s-=(--c[a[i]]);
	sol(l,mid-1,pl,p,s);
	for(int i=pl;i<p;i++)s-=(--c[a[i]]);
	for(int i=l;i<=mid;i++)s+=c[a[i]]++;
	sol(mid+1,r,p,pr,s);
	for(int i=pl;i<p;i++)c[a[i]]++;
	for(int i=l;i<=mid;i++)c[a[i]]--;
}
int main()
{
	int k;scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]),dp[1][i]=dp[1][i-1]+(c[a[i]]++);
	for(int i=2;i<=k;i++)
	{
		b=i&1;memset(c,0,sizeof(c));
		for(int j=1;j<=n;j++)dp[b][j]=1e17;
		sol(1,n,1,n,0);
	}
	printf("%lld\n",dp[k&1][n]);
	return 0;
}