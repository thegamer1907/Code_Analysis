#include<bits/stdc++.h>
using namespace std;
#include<cstdio>
typedef long long ll;
main()
{
	ll n,k,count=0,ans=0,i,x,y;
	cin>>n>>k;
	ll a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll l=0,r=0;
	while(r<n)
	{
		if(!a[r])
		count++;
		if(count>k)
		{
			if(r-l>ans)
			{
				ans=r-l;
				x=l;
				y=r-1;
			}
			count--;
			r--;
			if(!a[l])
			count--;
			l++;
		}
		r++;
	
	}
	if(r-l>ans)
	{
		ans=r-l;
		x=l;
		y=r-1;
	}
	cout<<ans<<endl;
	for(i=x;i<=y;i++)
	a[i]=1;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	
	
	

}
