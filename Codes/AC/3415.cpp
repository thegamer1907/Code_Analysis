#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long n,k,ans,l,r,mid,sum=0,tot;
bool check(long long x)
{
	sum=0;tot=n;
	while (tot>0)
	{
		if (tot<x) {sum+=tot;tot=0;}
		else
		{
			sum+=x;tot-=x;
			tot-=tot/10;
		}
	}
	return sum>=((n+1)>>1);
}
int main()
{
	scanf("%I64d",&n);
	l=1;ans=r=n;
	while (l<=r)
	{
		mid=(l+r)>>1;
		if (check(mid)) {ans=mid;r=mid-1;}
		else l=mid+1;
	}
	printf("%I64d\n",ans);
	return 0;
}