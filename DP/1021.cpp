#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;
int n, p[maxn], ans, t;
bool b[maxn];

int main ()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> b[i];
		if (b[i])
			p[i] = p[i - 1] + 1;
		else
			p[i] = p[i - 1];
	}
	ans = 0;
	for (int i = 1; i <= n; ++i)
		for (int j = i; j <= n; ++j)
		{
			t = p[n] + (j - i + 1 - (p[j] - p[i - 1])) - (p[j] - p[i - 1]);
			if (t > ans)
			{
				//cout << i << ' ' << j << ' ' << (j - i + 1 - (p[j] - p[i - 1])) << ' ' << (p[j] - p[i - 1]) << ' ' << t << '\n';
				ans = t;
			}
			//ans = max(ans, j - i + 1 - (p[j] - p[i - 1]));
		}
	cout << ans << '\n';

}
