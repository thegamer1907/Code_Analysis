#include <iostream>
#include <cstdio>

using namespace std;

bool judge(int a, int b, int c, int d)
{
	int count[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		int t = 1 << i;
		if (a & t) count[i]++;
		if (b & t) count[i]++;
		if (c & t) count[i]++;
		if (d & t) count[i]++;
	}

	for (int i = 0; i < 4; i++)
	{
		if (count[i] > 2)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n, k;
	int a[16] = { 0 };
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int t = 0;
		for (int j = k - 1; j >= 0; j--)
		{
			int p;
			cin >> p;
			t |= p * (1 << j);
		}

		a[t]++;
	}

	if (a[0])
	{
		puts("YES");
		return 0;
	}
	for (int i = 0; i < (1 << k); i++)
	{
		for (int j = 0; j < (1 << k); j++)
		{
			if (((i & j) == 0) && (a[i] && a[j]))
			{
				puts("YES");
				return 0;
			}
		}
	}

	puts("NO");
	return 0;
}