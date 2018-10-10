#include <bits/stdc++.h>

using namespace std;


#define ll long long 

ll n, m, k;

bool F(ll x)
{
	ll sum = 0;
	for(int i=1;i<=n;++i)
	{
		(x%i == 0)? sum += min(x/i -1, m) : sum += min(x/i, m);
	}
	return sum <= k-1;
}

int main()
{
	cin>>n>>m>>k;
	ll low = 1, high = n*m + 1;
	while(high - low > 1)
	{
		ll mid = (low + high)/2;
		F(mid)? low = mid : high = mid;
	}
	cout<<low<<endl;
	return 0;
}