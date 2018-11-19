#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const lli N=100009, K=29, inf=1e16;
lli n, k, a[N], dp[N][K], best[N][K], L=1, R=1, cost=0, cnt[N];
void AddLeft()
{
	L--;
	cost+=cnt[a[L]];
	cnt[a[L]]++;
}
void AddRight()
{
	R++;
	cost+=cnt[a[R]];
	cnt[a[R]]++;
}
void DelLeft()
{
	cost-=(cnt[a[L]]-1);
	cnt[a[L]]--;
	L++;
}
void DelRight()
{
	cost-=(cnt[a[R]]-1);
	cnt[a[R]]--;
	R--;
}
lli Cost(lli l, lli r)
{
	if(r<l)
	{
		return 0;
	}
	while(L<l)
	{
		DelLeft();
	}
	while(L>l)
	{
		AddLeft();
	}
	while(R<r)
	{
		AddRight();
	}
	while(R>r)
	{
		DelRight();
	}
	return cost;
}
void Solve(lli lv, lli l, lli r, lli optl, lli optr)
{
	if(l>r)
	{
		return ;
	}
	lli mid=(l+r)/2;
	dp[mid][lv]=inf;
	for(int i=optl;i<=optr;i++)
	{
		if(dp[mid][lv]>dp[i][lv-1]+Cost(i+1, mid))
		{
			dp[mid][lv]=dp[i][lv-1]+Cost(i+1, mid);
			best[mid][lv]=i;
		}
	}
	Solve(lv, l, mid-1, optl, best[mid][lv]);
	Solve(lv, mid+1, r, best[mid][lv], optr);
}
int main()
{
	//freopen("test.inp","r",stdin);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cnt[a[1]]=1;
	for(int i=1;i<=n;i++)
	{
		dp[i][1]=Cost(1, i);
	}
	for(int i=2;i<=k;i++)
	{
		Solve(i, 1, n, 1, n);
	}
	cout<<dp[n][k];
}