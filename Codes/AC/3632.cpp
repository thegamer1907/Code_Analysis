#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005],b[200005],c[200005],d[200005];
ll n,m,k,s,x;

int erfen(int xx)
{
	ll l=0,r=k-1,mid;
	while(l<r)
	{
		mid=(l+r)/2;
		if(d[mid]+b[xx]>s)r=mid;
		else l=mid+1;
	}
	if(d[l]+b[xx]>s)l--;
	return l;
}

int main()
{

	cin>>n>>m>>k;
	cin>>x>>s;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		// scanf("%I64d",&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		// scanf("%I64d",&b[i]);
	}
	for(int i=0;i<k;i++)
	{
		cin>>c[i];
		// scanf("%I64d",&c[i]);
	}
	for(int i=0;i<k;i++)
	{
		cin>>d[i];
		// scanf("%I64d",&d[i]);
	}

	ll ans=n*x;

	for(int i=0;i<m;i++)
	{
		if(b[i]<=s)ans=min(ans,n*a[i]);
		int pos=erfen(i);
		if(pos>=0&&pos<k)
		{
			ans=min(ans,(n-c[pos])*a[i]);	
		}
	}
	for(int i=k-1;i>=0;i--)
	{
		if(d[i]<=s)
		{
			ans=min(ans,(n-c[i])*x);
		}
	}
	cout<<ans<<endl;
}