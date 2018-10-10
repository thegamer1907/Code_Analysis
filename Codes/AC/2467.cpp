#include<bits/stdc++.h>
using namespace std;
int n,m,tot;
int num[1000001],fac[10000001],prime[10000001],used[10000001],sum[10000001],id[10000001];
int bs1(int x)
{
	int l=0,r=tot;
	while (l<r)
	{
		int mid=(l+r)/2;
		if (prime[mid]<x) l=mid+1;
		else r=mid;
	}
	return l;
}
int bs2(int x)
{
	int l=0,r=tot;
	while (l<r)
	{
		int mid=(l+r)/2;
		if (prime[mid]<=x) l=mid+1;
		else r=mid;
	}
	return l-1;
}
int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	scanf("%d",&num[i]);
	for (int i=2;i<=10000000;i++)
	{
		if (!used[i]) prime[++tot]=i,fac[i]=i,id[i]=tot;
		for (int j=1;j<=tot;j++)
		{
			if (prime[j]*i>10000000) break;
			used[prime[j]*i]=1;
			if (i%prime[j]==0)
			{
				fac[i*prime[j]]=prime[j];
				break;
			}
			fac[prime[j]*i]=prime[j];
		}
	}
	for (int i=1;i<=n;i++)
	{
		int s=num[i];
		while (s!=1)
		{
			sum[fac[s]]++;
			int x=fac[s];
			while (s%x==0)
			s=s/x;
		}
	}
	for (int i=1;i<=10000000;i++)
	sum[i]+=sum[i-1];
	scanf("%d",&m);
	for (int i=1;i<=m;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		if (l>1e+7) l=1e7+1;
		if (r>1e+7) r=1e7;
		printf("%d\n",sum[r]-sum[l-1]);
	}
}