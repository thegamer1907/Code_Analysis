#include<bits/stdc++.h>
using namespace std;
long long n,l,r,mid,ans;
int check(long long a)
{
	long long p=n,t1=0;
	while(p>0)
	{
		t1+=min(p,a);p=p-min(p,a);
		p=p-p/10;
	}
	if(t1>=n/2+n%2)return 1;
	return 0;
}		
int main()
{
	scanf("%I64d",&n);
	l=1;r=n;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid))r=mid-1,ans=mid;
		else l=mid+1;
	}
	printf("%I64d",ans);
	return 0;
}
