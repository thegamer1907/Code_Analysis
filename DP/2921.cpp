#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <string.h>

using namespace std;

using ii = pair<int, int>;
using i64 = long long int;
using ii64 = pair<long long int, long long int>;

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	vector<int> arr(n);
	int zeroPos = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 0)
			zeroPos = i;
	}

	if (k >= 2)
	{
		printf("Yes");
		return 0;
	}

	int b;
	scanf("%d", &b);

	arr[zeroPos] = b;

	bool inc = true;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			inc = false;
		}
	}

	if (inc)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}

	return 0;
}