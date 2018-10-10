#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; long long l, m = 0;
	cin >> n >> l;
	long long *lantert = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> lantert[i];
	sort(lantert, lantert + n);
	if (lantert[0] > 0 || lantert[n - 1] < l)
		m = 2 * max(lantert[0], l - lantert[n - 1]);
	for (int i = 0; i < n - 1; i++)
		m = max(m, lantert[i + 1] - lantert[i]);
	cout << setprecision(10) << (double)m / 2;
	return 0;
}