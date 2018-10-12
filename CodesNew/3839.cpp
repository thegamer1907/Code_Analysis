#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
typedef long long int ll;
typedef pair<ll,ll> pp;
#define X first
#define Y second
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const int N = 5e5;
ll a[N];

int main()
{
	int n; 
	cin>>n;

	for (int i=0; i<n; i++)
		cin>>a[i];
	sort (a,a+n); 

	ll lo=1, hi= 1e10,ans;

	while (lo <=hi)
	{
		ll mid= (lo+hi)/2 , temp=0, flag=1 ; 

		for (int i=0; i<n; i++)
		{
			if (mid <a[i])
			flag= 0; 
			temp+=mid- a[i]; 
		}

		if (flag && temp >= mid)
		{
			ans= mid; 
			hi= mid-1; 
		}
		else
			lo =mid+1 ; 
	}

	cout<<ans<<endl ; 


return 0;
}