#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 10;

ll p[maxn];

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, m, k;
	cin >> n >> m >> k;

	for (int i = 0; i < m; ++i)
		cin >> p[i];

	ll ans = 0;

	ll canl = 0, canl_tmp = 0;


	ll tmp_k ;
	if ((p[0] - canl) % k == 0)
		tmp_k = ((p[0] - canl) / k ) * k;
	else
		tmp_k = ((p[0] - canl) / k + 1) * k;

	for (ll i = 0; i < m; ++i)
	{

		if (p[i] - canl <= tmp_k)
		{
			canl_tmp++;
			continue;
		}

		// cout << canl << endl;
		canl = canl_tmp;

		if (p[i] - canl <= tmp_k)
		{
			i--;
			ans++;
			continue;
		}
		// int tmp = tmp_k;
		if ((p[i] - canl) % k == 0)
			tmp_k = ((p[i] - canl) / k ) * k;
		else
			tmp_k = ((p[i] - canl) / k + 1) * k;
		i--;
		// i--;
		// cout << tmp_k << endl;
		// tmp_k += k;

		// ans += (tmp_k - tmp) / k;
		ans++;

	}

	ans++;
	cout << ans << endl;


	return 0;
}