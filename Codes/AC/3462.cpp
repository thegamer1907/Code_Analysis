#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
ll n;
int main()
{
//	freopen("1.in", "r", stdin);
//	freopen("1.out", "w", stdout);
	cin >> n;
	ll l = 1, r = n;
	while(l != r)
	{
		ll mid = (l + r) / 2;
		ll t = n, s = 0;
		while(t)
		{
			if (t <= mid)
			{
				s += t;
				t = 0;
			}
			else
			{
				t -= mid;
				s += mid;
			}
			t = t - t / 10;
		}
		if (s >= (n + 1) / 2) r = mid; else l = mid + 1;
	}
	cout << l;
	return 0;
}

