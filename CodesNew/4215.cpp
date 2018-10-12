#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(ll i=1;i<n;i++)

int main()
{
	ll n,q;
	cin>>n>>q;
	
	ll a[n],b[n];
	
	cin>>a[0];
	
	f(i,n)
	{cin>>a[i];a[i]+=a[i-1];}
	
	ll ans,x,m(0);
	
	while(q--)
	{
		cin>>x;
		m+=x;
		ans=upper_bound(a,a+n,m)-a;
		if(ans==n)ans=0,m=0;
		cout<<n-ans<<"\n";
	}
	
	
	
}