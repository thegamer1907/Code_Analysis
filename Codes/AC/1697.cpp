#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define eb emplace_back
#define all(v) v.begin(),v.end()
#define rev(v) reverse(v.begin(),v.end())
#define ll long long
#define MOD 1000000007
ll exp(ll a, ll b, ll mod=1e9+7)
{
	ll tem=1;
	while(b)
	{
		if(b%2)
			tem=(tem*a)%mod;
		a=(a*a)%mod;
		b=b/2;
	}
	return tem;
}
ll Ok(ll val,ll p,ll m)
{
	ll ans=0;
	for(int i=1;i<=p;i++)
		ans+=min(val/i,m);
	return ans;
}
int main()
{
	int m,p;
	cin>>m>>p;
	ll tem;
	cin>>tem;
	ll l=1,r=1LL*m*p;
	ll mid;
	while(l<r)
	{
		mid=(l+r)/2;
		if(Ok(mid,m,p)>=tem)
			r=mid;
		else
			l=mid+1;
	}
	cout<<l<<"\n";
	return 0;
}