#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int a[100001];
long long partial[100001];

int countAns(int ind, int have)
{
	int l = 0, r = ind, mid;
	while(l < r - 1)
	{
		mid = (l + r) / 2;
		if (1LL * (ind - mid) * a[ind] - (partial[ind - 1] - partial[mid - 1]) <= have)
			r = mid;
		else
			l = mid;
	}
	return ind - r + 1;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t, i, j, k, n, m, d;
	
	cin >> n >> k;
	for(i = 1; i <= n; i++)
		cin >> a[i];

	sort(a + 1, a + n + 1);

	for(i = 1; i <= n; i++)
		partial[i] = partial[i - 1] + a[i];

	int best = 1, ind = 1;
	for(i = 1; i <= n; i++)
	{
		int cur = countAns(i, k);
		if (cur > best)
		{
			best = cur;
			ind = i;
		}
	}

	cout << best << " " << a[ind] << endl;

	return 0;
}