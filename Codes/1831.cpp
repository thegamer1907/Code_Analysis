#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, k;

ll cal(ll x)
{
	ll cnt = 0;
	for(ll i=1; i<=n && i<=x; ++i) cnt += min(x/i, m);
	return cnt;
}

int main()
{
	cin >> n >> m >> k;
	ll l = 1, r = n*m, mid = (l+r)/2;
	while(l < r)
	{
		mid = (l+r)/2;
		if(cal(mid) < k) l = mid+1;
		else r = mid;
	}
	cout << l << endl;

	return 0;
}
