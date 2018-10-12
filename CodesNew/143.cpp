#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, k;

ll qpow (ll p, ll k)
{
	ll ret = 1;
	while (k)
	{
		if (k & 1)
			ret *= p;
		p *= p;
		k >>= 1;
	}
	return ret;
}

int main ()
{
	cin >> n >> k;
	for (ll i = 1; i <= n; ++i)
		if (k % qpow(2ll, i) == qpow(2ll, i-1))
		{
			cout << i;
			return 0;
		}
}