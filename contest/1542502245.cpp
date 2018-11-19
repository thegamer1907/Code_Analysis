#include<stdio.h>
int nowl=1,nowr=0;
int cnt[131072];
int a[131072];
long long nowans=0;
long long query(int l,int r)
{
	while(nowr<r)
	{
		nowr++;
		nowans+=cnt[a[nowr]];
		cnt[a[nowr]]++;
	}
	while(nowl>l)
	{
		nowl--;
		nowans+=cnt[a[nowl]];
		cnt[a[nowl]]++;
	}
	while(nowr>r)
	{
		cnt[a[nowr]]--;
		nowans-=cnt[a[nowr]];
		nowr--;
	}
	while(nowl<l)
	{
		cnt[a[nowl]]--;
		nowans-=cnt[a[nowl]];
		nowl++;
	}
	return nowans;
}
long long dp[131072],dp2[131072];
void sol(int l,int r,int ll,int rr)
{
	if(l>r)
	{
		return;
	}
	int rrr=rr;
	int mid=(l+r)>>1;
	if(rrr>mid)
	{
		rrr=mid;
	}
	int mmid=0;
	dp[mid]=1000000000000LL;
	for(int i=ll;i<=rrr;i++)
	{
		long long ans=dp2[i-1]+query(i,mid);
		if(ans<dp[mid])
		{
			dp[mid]=ans;
			mmid=i;
		}
	}
	sol(l,mid-1,ll,mmid);
	sol(mid+1,r,mmid,rr);
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		dp2[i]=1000000000000LL;
	}
	while(k--)
	{
		sol(1,n,1,n);
		for(int i=1;i<=n;i++)
		{
			dp2[i]=dp[i];
		}
	}
	printf("%lld\n",dp[n]);
	return 0;
}