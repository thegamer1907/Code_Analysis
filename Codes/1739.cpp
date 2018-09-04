#include<iostream>
#include<cstdio>

using namespace std;

typedef long long LL;

LL n,m,k;

bool cek(LL mid)
{
	LL tmp=0;
	for(int i=1;i<=n;i++)
	{
		tmp+=min(m,mid/i);
	}
	return tmp>=k;
}

int main()
{
	scanf("%lld%lld%lld",&n,&m,&k);
	LL l=1;
	LL r=n*m;
	LL ans=r;
	while(l<=r)
	{
		LL mid=(l+r)/2;
		if(cek(mid))
		{
			r=mid-1;
			ans=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	printf("%lld\n",ans);
	return 0;
}
