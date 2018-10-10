#include <bits/stdc++.h>
#define ll long long int
#define take(a) for(auto &x:a) cin>>x
#define show(a) for(auto &x:a) cout<<x<<" "
#define loop(i,x,n) for(ll i=x;i<n;i++)
#define mp make_pair
#define pb push_back

// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
using namespace std;

int main() {
	// your code goes here
	ll n,k;
	cin>>n;
	ll a[n];
	take(a);
	ll ans=0;
	ll i=0;
	ll j=n-1;
	ll sumx=a[i];
	ll sumy=a[n-1];
	while(i<j)
	{
	
		if(sumx==sumy)
		{
			ans=sumx;
			i++;
			j--;
			sumx+=a[i];
			sumy+=a[j];
		}
		else if(sumx<sumy)
		{
			i++;
			sumx+=a[i];
		}
		else
		{
			j--;
			sumy+=a[j];
		}
	}
	cout<<ans<<endl;
	return 0;
}