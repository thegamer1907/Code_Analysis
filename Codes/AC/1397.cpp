#include <iostream>
#include <algorithm>
using namespace std;

long long n, S;
const int MAXN = 100005;
long long a[MAXN];

int main()
{
	cin >> n >> S;
	for(int i = 1; i <= n; i++)
		cin >> a[i];

	long long low = 0, high = n, total = 0;
	long long ans = 1e18;
	while(low <= high)
	{
		long long b[MAXN];
		long long mid = (low + high) / 2;
		for(int i = 1; i <= n; i++)
			b[i] = a[i] + mid * i;
		sort(b + 1, b + n + 1);

		long long cost = 0;
		for(int i = 1; i <= mid; i++)
			cost += b[i];
		if(cost <= S)
		{
			if(total < mid)
			{
				total = mid;
				ans = cost;
			}
			else if(total == mid)
				ans = min(ans, cost);
			low = mid + 1;
		}
		else
			high = mid - 1;
	}

	cout << total << " " << ans << "\n";
	return 0;
}