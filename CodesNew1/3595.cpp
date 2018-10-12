#include <bits/stdc++.h>
using namespace std;

int main()
{
	// freopen("input.txt", "r", stdin);

	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	int a[n];


	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int res2 = *max_element(a, a+n) + m;

	for (int i = 0; i < m; i++)
	{
		int pos = -1;
		for (int j = 0; j < n; j++)
		{
			if (pos == -1 || a[j] < a[pos])
				pos = j;
		}
		a[pos]++;
	}

	int res1 = *max_element(a, a+n);

	printf("%d %d\n", res1, res2);

	return 0;
}