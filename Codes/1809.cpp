#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n, m, k;
	cin >> n >> m >> k;
	ll s = 1, e = n * m;
	while (s <= e)
	{
		ll mid = (s + e) >> 1;
		ll cnt = 0;
		for (ll i = 1; i <= n; i++)
			cnt += min(m, mid / i);

		if (cnt < k)
			s = mid + 1;
		else
			e = mid - 1;
	}
	cout << e + 1 << endl;
	return 0;
}
