#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int n, k; cin >> n >> k;
	int a[n + 5] = {};
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] >= a[k] && a[i])++ans;
	}
	cout << ans << endl;
}