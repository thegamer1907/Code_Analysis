#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	long long n,t;
	cin >> n >> t;
	
	vector<long long> a(n);
	for(long long i=0;i<n;i++) cin >> a[i];
	
	vector<ll> b(n);
	
	b[0]=a[0];
	for(long long i=1;i<n;i++)
	{
		b[i]=b[i-1]+a[i];
	}
	
	if(n==1)
	{
		if(a[0]<=t) cout << n << endl;
		else cout << "0" << endl;
		return 0;
	}
	
	
	ll lo=1,hi=n,mid;
	
	while(lo<hi)
	{
		mid = lo + (hi-lo+1)/2;
		
		ll mn=b[mid-1];
		for(ll i=mid;i<n;i++)
		{
			mn=min(mn,b[i]-b[i-mid]);
		}
		
		if(mn<=t)
		{
			lo=mid;
		}
		else
		{
			hi=mid-1;
		}
		
	}
	
	if(lo==1)
	{
		ll mn=INT_MAX;
		for(ll i=0;i<n;i++)
		{
			mn=min(mn,a[i]);
		}
		if(mn<=t) cout << lo << endl;
		else cout << lo-1 << endl;
		return 0;
	}
	
	cout << lo << endl;
	
}