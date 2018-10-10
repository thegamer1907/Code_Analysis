#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	//freopen("a.txt", "r", stdin);
	ios_base::sync_with_stdio(0), cin.tie(0);

	int k;
	cin >> k;
	for (int i = 1; i; ++i)
	{
		int x = i, s = 0;
		while (x)
		{
			s += x % 10;
			x /= 10;
		}
		if (s == 10)
			--k;
		if (!k)
		{
			cout << i;
			return 0;
		}
	}

	return 0;
}
