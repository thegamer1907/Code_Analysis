#include <bits/stdc++.h>

#define ll long long 
#define pb push_back
#define mp make_pair
#define fr(g,f,h) for(ll g=f;g<h;g++)
#define br(g,f,h) for(ll g=f;g<h;g--)
ll mod(ll x)
{
	if(x<0)
		return -x;
	return x; 
}

ll expo(ll x,ll y)
{
	ll res = 1;
	while(y>0)
	{
		if(y%2==1)
			res = (res*x);
		y>>1;
		x=x*x;
	}
	return res;

}

using namespace std;
vector<ll> v;
ll a[1000000],b[1000000];
int main()
{
	ios_base::sync_with_stdio(false);
	ll n,t=0,x=-1,y=0,m=0,o=0;
	cin>>n;
	fr(i,0,n)
	{
		cin>>a[i];
		if (a[i]==0 && x==-1)
		{
			x=i;
		}
		if (a[i]==1)
		{
			o++;
		}
	}
	if (n==o)
	{
		cout<<n-1;return 0;

	}
	fr(i,0,n)
	{
		if (a[i]==0)
		{
			b[i]=1;
		}
		else
		{
			b[i]=-1;
		}
	}
	fr(i,0,n)
	{
		m=m+b[i];
		if (m<0)
		{
			m=0;
		}
		if (m>y)
		{
			y=m;
		}
	}
	cout<<o+y;
	return 0;
}