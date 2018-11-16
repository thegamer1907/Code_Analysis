#include <bits/stdc++.h>
using namespace std;

int bin[101];

int main ()
{
	int n, maxs = 0, ans = 0;
	scanf("%d", &n);

	for (int i=0; i<n; i++)
		scanf("%d", &bin[i]);

	for (int i=0; i<n; i++)
		maxs += bin[i];
	
	for (int i=0; i<n; i++)
	{
		int sum = maxs;
		for (int j=i; j<n; j++)
		{
			if (bin[j]) sum--;
			else sum++;

			if (sum > ans) ans = sum;
		}
	}

	printf("%d\n", ans);

	return 0;
}