#include <bits/stdc++.h>
using namespace std;

int main()
{
	// freopen("input.txt", "r", stdin);

	int n, m;

	scanf("%d", &n);
	int boys[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &boys[i]);
	}

	scanf("%d", &m);
	int girls[m];
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &girls[i]);
	}

	sort(boys, boys + n);
	sort(girls, girls + m);

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (abs(boys[i] - girls[j]) <= 1)
			{
				res++;
				girls[j] = 1000;
				break;
			}
		}
	}

	printf("%d\n", res);

	return 0;
}