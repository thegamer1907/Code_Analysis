#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll f[100005];
main()
{
	ll n,m,i,q;
	cin>>n>>q;
	ll a[n+5],c[n+5];
	for(i=1;i<=n;i++)
		cin>>a[i];
	c[n]=1;
	f[a[n]]++;
	for(i=n-1;i>=1;i--)
		if(f[a[i]])
			c[i]=c[i+1];
		else
			{
				c[i]=c[i+1]+1;
				f[a[i]]++;
			}
			while(q--)
			{
				ll x;
				cin>>x;
				cout<<c[x]<<"\n";
			}
}
