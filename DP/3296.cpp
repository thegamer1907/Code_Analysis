#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
string s;
const ll M=1e6+6;
ll z[M];
vector<ll> mid,suff;
void zalgo()
{
	ll n=s.size();
	ll i,L=0,R=0;
	for(i=1;i<n;i++)
	{
		if(R<i)
		{
			L=R=i;
			while(R<n && s[R-L]==s[R])
				R++;
			R--;
			z[i]=R-L+1;
		}
		else
		{
			if(z[i-L]<R-i+1)
				z[i]=z[i-L];
			else
			{
				L=i;
				while(R<n && s[R-L]==s[R])
					R++;
				R--;
				z[i]=R-L+1;
			}
		}
	}
}
inline ll mx(ll a,ll b)
{
	if(a>b)
		return a;
	return b;
}
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll i,j,n;
	cin>>s;
	n=s.size();
	zalgo();
	ll x=0;
	for(i=1;i<n;i++)
	{
		if(z[i])
		{
			if(i+z[i]==n)
			{
				x=mx(x,z[i]-1);
			}
			else
				x=mx(x,z[i]);
		}
	}
	ll ans=0;
	for(i=1;i<n;i++)
		if(z[i]<=x && i+z[i]==n)
			ans=mx(ans,z[i]);
	if(ans==0)
		cout<<"Just a legend\n";
	else
	{
		for(i=0;i<ans;i++)
			cout<<s[i];
		cout<<"\n";
	}
	return 0;
}