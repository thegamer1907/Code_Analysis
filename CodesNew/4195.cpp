#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxc = 1e5+5;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n,q;
	cin>>n>>q;
	vector<ll> a(n,0);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(i)
			a[i]+=a[i-1];
	}
	ll r=0,k=0;
	while(q--)
	{
		ll x;
		cin>>x;
		ll pos = upper_bound(a.begin(),a.end(),x+r)-a.begin();
		
		if(pos==n)
		{
			r=0;
			cout<<n<<endl;		
		}
		else
		{
			r+=x;
			cout<<n-pos<<endl;
		}
	}
	return 0;
}