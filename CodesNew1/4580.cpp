#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10000005],b[10000005];
int main()
{
	ll n,xz=0,t=0;
	scanf("%lld",&n);
	for (ll i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	for (ll i=0;i<n;i++)
	{
		if(a[i]>=2*a[xz])
		{
			xz++;
		}
	}
	printf("%lld",n-min(n/2,xz));
	return 0;
}