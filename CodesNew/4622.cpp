#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fastio	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

int main()
{
	ll n;
	cin>>n;
	vector <ll> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(all(v));
	// for(ll i=0;i<n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }cout<<endl;
	ll ans=0;
	ll r=n/2;
	for(ll i=0;i<n/2;i++)
	{
		while(r<n&&v[i]*2>v[r])
		{
			r++;
		}
		if(r>=n)
		{
			break;
		}
		if(v[i]*2<=v[r])
		{
			r++;
			ans++;
		}
	}
	cout<<n-ans<<endl;
}