#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
typedef tree <ll,null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define mod 1000000007
#define pb push_back
/*
PBDS
pbds A
A.insert(x);
kth smallest:
cout<<*A.find_by_order(k-1);
num of elements less than x:
cout<<A.order_of_key(X);
*/

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n,i,x,np=0,z=0;
	cin>>n;
	vector <ll> v,hol,held;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(i=0;i<n/2;i++)
	{
		hol.pb(v[i]);
	}
	for(i=n/2;i<n;i++)
	{
		held.pb(v[i]);
	}
	ll cur=0;
	for(i=0;i<hol.size();i++)
	{
		while(2*hol[i]>held[cur])
		{
			cur++;
			if(cur==held.size())
			{	z=1;
				break;
			}
		}
		if(z)
		{
			break;
		}
		np++;
		cur++;
		if(cur==held.size())
		{
			break;
		}
	}
	cout<<n-np;
}