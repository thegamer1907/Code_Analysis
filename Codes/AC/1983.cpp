#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[300005],b[300005];
ll l[300005],r[300005];
ll cnt;
ll id[300005];

ll fin(ll x)
{
	ll l1=0,rr=cnt-1,mid;
	while(l1<=rr)
	{
		mid=(l1+rr)/2;
		if(b[mid]==x)return mid;
		else if(b[mid]<x)
			l1=mid+1;
		else
			rr=mid-1;
	}
	return -1;
}
int main()
{
	ll n,k;cin>>n>>k;
	for(ll i=0;i<n;i++)
	{
		scanf("%I64d",&a[i]);
		b[i]=a[i];
	}
	sort(b,b+n);
	cnt=unique(b,b+n)-b;
	for(ll i=0;i<n;i++)
	{
		id[i]=fin(a[i]);
		r[id[i]]++;
	}
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		r[id[i]]--;
		if(a[i]%k==0)
		{
			int x=fin(a[i]/k);
			int y=fin(a[i]*k);
			if(x!=-1&&y!=-1)
			{
				ans+=l[x]*r[y];
			}
		}
		l[id[i]]++;
	}
	cout<<ans<<endl;
}