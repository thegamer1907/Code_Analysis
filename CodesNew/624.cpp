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

map<string,ll> mp;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n,m,i,co=0;
	string s;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>s;
		mp[s]++;
	}
	for(i=0;i<m;i++)
	{
		cin>>s;
		if(mp[s])
		{
			co++;
		}
	}
	if(co%2==0)
	{
		if(m>=n)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
	}
	else
	{
		m--;
		if(m>=n)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
	}
}