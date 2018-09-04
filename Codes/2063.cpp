#include<bits/stdc++.h>
#define ll long long
#define input(a,n) for(ll i=0;i<n;i++) cin>>a[i];
#define output(a,n) for(ll i=0;i<n;i++) cout<<a[i]<<" ";
#define all(x) x.begin(),x.end()
#define vi vector<ll>
#define vvi vector<vector<ll> >

using namespace std;
 main()
{
	map<ll,ll> l,r;
	ll n,k;
	cin>>n>>k;
	vi a(n);
	input(a,n);
	for(ll i=0;i<n;i++)
	{
		r[a[i]]++;
		
	}
	for(ll i=n-1;i>=0;i--)
	{
		
	}
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		
		r[a[i]]--;
		if(a[i]%k==0)
		{
			sum+=l[a[i]/k]*r[a[i]*k];
		}
		
		l[a[i]]++;
		
	}
	cout<<sum<<endl;

}

