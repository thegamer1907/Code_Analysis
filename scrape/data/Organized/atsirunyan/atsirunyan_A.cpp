#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <deque>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <queue>
#include <unordered_set>
#include <iomanip>

typedef long long ll;

using namespace std;

long long findPageLast(ll num, ll n, ll k, ll curlastpage)
{
	ll lowerbound = 0;
	ll upperbound = ((n - curlastpage) / k) + 1;

	while (upperbound - lowerbound > 1)
	{
		ll tmp = (lowerbound + upperbound) / 2;
		if (curlastpage + (tmp * k) < num)
		{
			lowerbound = tmp;
		}
		else
		{
			upperbound = tmp;
		}
	}

	if (lowerbound * k + curlastpage >= num)
		return min(curlastpage + k * lowerbound, n);
	else
		return min(curlastpage + k * upperbound, n);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n, m, k;
	cin >> n >> m >> k;

	vector<long long> v(m);
	for (int i = 0; i < m; ++i)
		cin >> v[i];

	long long pagelast = min(n, k);

	long long ans = 0;

	for (int i = 0; i < m;)
	{
		long long lowcount = 0;
		while (i < v.size() && v[i] <= pagelast)
		{
			++i;
			++lowcount;
		}

		if (lowcount == 0)
		{
			pagelast = findPageLast(v[i], n, k,pagelast);
			continue;
		}
		else
		{
			pagelast += lowcount;
			++ans;
		}
	}

	cout << ans << endl;
	return 0;
}