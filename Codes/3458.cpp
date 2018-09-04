#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>

//#include "BigInt.h"

using namespace std;

#define ll long long
#define ull unsigned long long
const ll INF = 999999999999999999;
const double PI = acos(-1.0);

void stop()
{
#ifndef ONLINE_JUDGE
	system("pause");
#endif
	exit(0);
}

ll n;

ll get_r(ll k)
{
	ll nn = n;
	ll a = 0, b = 0;
	while (nn > 0)
	{
		a += min(k, nn);
		nn -= min(k, nn);
		b += nn / 10;
		nn -= nn / 10;
	}
	return a;
}

ll bin_search()
{
	ll l = 0, r = 1000000000000000001;
	ll mid;
	while (l != r - 1)
	{
		mid = (l + r) / 2;
		ll g = get_r(mid);
		if (g * 2 > n)
		{
			r = mid;
		}
		else if (g * 2 < n)
		{
			l = mid;
		}
		else
		{
			return mid;
		}
	}
	return r;
}

int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	ios::sync_with_stdio(false);

	cin >> n;
	ll res = bin_search();
	cout << res;
	//cout << endl << get_r(1);

	stop();
}