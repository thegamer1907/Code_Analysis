#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll s[300000];

ll f(ll n,ll val)
{
    if(val<s[0])
	return -1;
	else if(val>s[n-1])
	return n;
  ll beg =0,end = n-1;
  while(beg<end)
  {
  	ll mid = (beg+end+1)/2;
  	if(s[mid]>val)
     end = mid-1;
	else
	beg = mid;  	
  }
  return beg;
}

main()
{ll n,q,a[300000];vector<ll>v;

	cin>>n>>q;
	
	for(ll i=0;i<n;i++)
	cin>>s[i];
	
	for(ll i=0;i<q;i++)
	cin>>a[i];
	
	for(ll i=0;i<n-1;i++)
	s[i+1]+=s[i];
	
	for( ll i=0;i<q;i++)
	{ 

		ll x =f(n,a[i]);

	 	if(x>=n-1)
			v.push_back(n);
		
	 else	if(x<0)
		{ 
		a[i+1]+= a[i];
		if(v.size()!=0)
		v.push_back(v[v.size()-1]);
		else
		v.push_back(n);
		}
		
		else
		{
			v.push_back(n-x-1);
			a[i+1]+=a[i];
		}
	
	}
	
		for(ll i=0;i<v.size();i++)
	cout<<v[i]<<endl;
}