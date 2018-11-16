#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;

ll calc(ll a,ll b,ll c, ll res)
{
	if ((a > c / 2) ^ (b > c / 2))
	{
		return res;
	}
	if (a <= c / 2)
	{
		return calc(a, b, c / 2, res + 1);
	}
	else
	{
		return calc(a - c / 2, b - c / 2, c / 2, res + 1);
	}
}

int main()
{
	ll a, b, c;
	cin >> c >> a >> b;
	ll res = calc(a, b, c, 0);
	ll p = 0;
	while(c > 0)
	{
		c >>= 1;
		++p;
	}
	--p;
	if (res == 0)
	{
		cout << "Final!";
	}
	else
	{
		cout << p - res;
	}
	return 0;
}