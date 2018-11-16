#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin >> n;
	ll maxi = 0;
	std::vector<ll> vals;
	for (int i = 0; i < n; ++i)
	{
		ll mon;
		cin >> mon;
		vals.push_back(mon);
		maxi=max(maxi,mon);
	}
	
	ll ans=0;
	for (int i = 0; i < vals.size(); ++i)
		ans+=maxi-vals[i];
	
	cout << ans << endl;



}