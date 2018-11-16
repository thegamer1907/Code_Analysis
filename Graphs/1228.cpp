#include <bits/stdc++.h>

int main()
{
	// freopen("input.txt", "r", stdin);

	int n, t;
	scanf("%d %d", &n, &t);
	int row[n];

	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d", &row[i]);
	}

	int sum = 0;
	while (sum < t - 1)
	{
		// printf("%d\n", sum);
		sum += row[sum];
	}



	printf("%s\n", sum == t - 1 ? "YES" : "NO");

	return 0;
}