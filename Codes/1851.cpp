#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll k, n, m;
ll check(ll x)
{
	ll ret = 0;
	for(ll i = 1; i <= n; i++)
	{
		ll z = x;
		if(z/i > m) ret += m;
		else ret += z/i;
	}
	return ret;
}
int main()
{
	cin >> n >> m >> k;
	ll l = 1, r = n*m;
	while(l <= r)
	{
		ll mid = l+r >> 1;
		if(check(mid) >= k) r = mid-1;
		else l = mid+1;
	}
	cout << l << endl;
	return 0;
}

