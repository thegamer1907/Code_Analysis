#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
typedef long long ll;
int main(void)
{
	ll n,m,k;
	while(scanf("%lld%lld%lld",&n,&m,&k)==3)
	{
		ll count=0,left=1,right=n*m,mid,sum;
		while(left<=right)
		{
			mid=left+(right-left)/2;
			count=0,sum=0;
			for(ll i=1;i<=n;i++)
			{
				if(mid%i)
					count+=min(m,mid/i);
				else
					count+=min(m,mid/i-1);
				if(count>=k)
					break;
			}
			if(count>=k)
				right=mid-1;
			else
				left=mid+1;
		}
		printf("%lld\n",right);
	}
	return 0;
}
