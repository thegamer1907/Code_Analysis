#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

bool check(ll k)
{
	ll x = n, sum = 0;
	while(x > 0)
	{
		sum += min(k, x);
		x -= min(k, x);
		x -= x / 10;
	}
	return 2 * sum >= n;
}

int main()
{
	scanf("%I64d", &n);
	ll l = 1, r = n;
	while(l < r)
	{
		ll mid = (l + r) >> 1;
		if(check(mid))
			r = mid;
		else
			l = mid + 1;
	}
	printf("%I64d\n", l);
	return 0;
}