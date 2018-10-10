#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

pair<ll, ll > arr[100002];
ll tmp[100002];

int main()
{
	ll n, t;
	scanf("%lld %lld", &n, &t);

	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &arr[i].first);
		arr[i].second = i;
	}
	
	long long k = 0, cost = 0;
	ll start = 1, end = n;
	while (start <= end)
	{
		ll mid = (start + end) / 2;
		ll sum = 0;
		for (int idx = 1; idx <= n; idx++)
			tmp[idx] = arr[idx].first + idx * mid;

		
		sort(tmp + 1, tmp + n + 1);
		
		for (int idx = 1; idx <= mid; idx++)
		{
			sum += tmp[idx];
		}
		if (sum > t)
		{
			end = mid - 1;
			continue;
		}
		else if (sum <= t)
		{
			start = mid + 1;
			if (mid > k)
			{
				k = mid;
				cost = sum;
			}
			k = max(k, mid);
			continue;
		}

	}

	cout << k << " " << cost << endl;

	return 0;
}