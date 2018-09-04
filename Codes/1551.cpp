#include <bits/stdc++.h>

using namespace std;

long long n, m, a[200000], b[200000];

int main() {
    ios_base::sync_with_stdio(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//#else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
#endif
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long l = 0, r = n;
	long long ans = 0;
	long long mid = 0;
	long long k = 0;
	long long sum = 0;
	while (l <= r)
	{
        mid = (l + r) / 2;
		ans = 0;
		for (long long i = 0; i < n; i++)
		{
			b[i] = a[i] + (i + 1)*mid;
		}
		sort(b, b + n);
		for (int i = 0; i < mid; i++)
		{
			ans += b[i];
		}
		if (ans <= m)
		{
			l = mid + 1;
			k = mid;
			sum = ans;
		}
		else if(ans > m) r = mid - 1;
	}

	cout << k << " " << sum;
    return 0;
}
