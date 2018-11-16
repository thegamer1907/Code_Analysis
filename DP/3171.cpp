#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200005;

int a[MAXN];

int n;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int res = 0, cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		++cnt;
		if (i == n || a[i] * 2 < a[i + 1])
		{
			res = max(res, cnt);
			cnt = 0;	
		}
	}
	cout << res << endl;
	return 0;	
}
