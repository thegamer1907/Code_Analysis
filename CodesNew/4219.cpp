#include<bits/stdc++.h>
using namespace std;
#include<cstdio>
typedef long long ll;
main()
{
	ll n,k,l,r,ans=0,i,mn=1e9+10,sum=0;
	cin>>n>>k;
	vector<ll> a(n+1);
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin()+1,a.end());
		for(i=1;i<=n;i++)
	{
		a[i]+=a[i-1];
	}
	for(i=1;i<=n;i++)
	{
		l=1;r=i-1;
		while(l<=r)
		{
			ll mid=(l+r)/2;
			sum=(i-mid)*a[i]-(i-mid+1)*a[i-1]+a[mid-1];
			if(sum>k)
			l=mid+1;
			else
			{
				if(i-mid+1>ans)
				{
					ans=i-mid+1;
					mn=a[i]-a[i-1];
				}
				r=mid-1;
			}
		}
	}
	if(mn!=1e9+10)
		cout<<ans<<" "<<mn;
		else
		cout<<"1"<<" "<<a[1];
	
}
