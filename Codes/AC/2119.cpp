#include <bits/stdc++.h>

using namespace std;
int n, k;
long long a[int(1e6)];
long long ans;
map <long long, long long> m, m1;

main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (i >= 3 && a[i] % k == 0) ans += m1[a[i] / k];
		if (a[i] % k == 0) m1[a[i]] += m[a[i] / k];
		m[a[i]]++;
	}
	cout << ans;
}