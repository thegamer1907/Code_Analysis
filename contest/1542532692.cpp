#include <stdio.h>
#include <math.h>
using namespace std;

int arr[20];

int pow(int j)
{
	int res = 1;
	while (j--)
	{
		res *= 2;
	}
	return res;
}

bool solve(int k)
{
	if (k == 4)
	{
		if (arr[0] != 0) return true;
		if (arr[1] != 0)
		{
			for (int i = 2; i <= 15; ++i)
			{
				if (i % 2 <= 0 && arr[i])
				{
					return true;
				}
			}
		}
		else if (arr[2] != 0)
		{
			for (int i = 2; i <= 15; ++i)
			{
				if (i % 4 <= 1 && arr[i])
				{
					return true;
				}
			}
		}
		else if (arr[4] != 0)
		{
			for (int i = 2; i <= 15; ++i)
			{
				if (i % 8 <= 3 && arr[i])
				{
					return true;
				}
			}
		}
		else if (arr[8] != 0)
		{
			for (int i = 2; i <= 15; ++i)
			{
				if (i % 16 <= 7 && arr[i])
				{
					return true;
				}
			}
		}
		else if (arr[3] && arr[12]) return true;
		else if (arr[6] && arr[9]) return true;
		else if (arr[5] && arr[10]) return true;
		return false;
	}
	else if (k == 3)
	{
		if (arr[0] != 0) return true;
		if (arr[1] != 0)
		{
			for (int i = 2; i <= 7; ++i)
			{
				if (i % 2 <= 0 && arr[i])
				{
					return true;
				}
			}
		}
		else if (arr[2] != 0)
		{
			for (int i = 2; i <= 7; ++i)
			{
				if (i % 4 <= 1 && arr[i])
				{
					return true;
				}
			}
		}
		else if (arr[4] != 0)
		{
			for (int i = 2; i <= 7; ++i)
			{
				if (i % 8 <= 3 && arr[i])
				{
					return true;
				}
			}
		}
		return false;
	}
	else if (k == 2)
	{
		if (arr[0]) return true;
		else if (arr[1] && arr[2]) return true;
		return false;
	}
	else
	{
		if (arr[0]) return true;
		return false;
	}
}
int main()
{
	int n, k,flag = 0;
	scanf("%d %d", &n, &k);
	//inp
	for (int i = 1; i <= n; ++i)
	{
		int cur = 0;
		int a;
		for (int j = 1; j <= k; ++j)
		{
			scanf("%d", &a);
			cur += a * pow(k - j);
		}
		arr[cur]++;
		/*if (i == 38 && cur == 13)
		{
			flag = 1;
		}*/
	}
	/*if (n == 100000 && flag)
	{
		for (int i = 0; i <= 15; ++i)
		{
			printf("%d   ", arr[i]);
		}
	}*/
	//end inp
	bool ans = solve(k);
	if (ans) printf("YES");
	else printf("NO");
    return 0;
}