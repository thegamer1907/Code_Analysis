#include <bits/stdc++.h>

using namespace std;

int n;
int a[100005];
int ans, minimum = INT_MAX;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		if ((a[i] - i + 1 + n - 1) / n * n + i < minimum) minimum = (a[i] - i + 1 + n - 1) / n * n + i, ans = i;
	}
	cout << ans << '\n';
	return 0;
}
