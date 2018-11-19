#include <cstdio>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <ext/pb_ds/priority_queue.hpp>
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define lowbit(x) x&(-x)
#define PA pair<int, int>
#define MK make_pair
using namespace std;
typedef long long LL;
inline int read()
{
	int l = 0, f = 1;
	char a = getchar();
	for (; a < '0' || a > '9'; a = getchar())
		if (a == '-') f = -1;
	for (; a >= '0' && a <= '9'; a = getchar())
		l = l*10+a-48;
	return l*f;
}
int n, k, mp[5][100005];
int main(int argc, char const *argv[])
{
	n = read(), k = read();
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= k; ++j)
			mp[j][i] = read();
	for (int i = 1; i <= k; ++i)
	{
		int pd = 0;
		for (int j = 1; j <= n; ++j) if (!mp[i][j]) pd = 1;
		if (!pd)
		{
			printf("No\n");
			return 0;
		}
	}
	if (k == 1)
	{
		for (int i = 1; i <= n; ++i)
		{
			if (mp[1][i] == 0)
			{
				printf("Yes\n");
				return 0;
			}
		}
		printf("No\n");
		return 0;
	}
	if (k == 2)
	{
		int f1 = 0, f2 = 0;
		for (int i = 1; i <= n; ++i)
		{
			if (mp[1][i] == 0 && mp[2][i] == 0)
			{
				printf("Yes\n");return 0;
			}
			if (mp[1][i] == 0 && mp[2][i] == 1)
			{
				if (f1)
				{
					printf("Yes\n");return 0;
				}
				f2 = 1;
			}
			if (mp[2][i] == 0 && mp[1][i] == 1)
			{
				if (f2)
				{
					printf("Yes\n");return 0;
				}
				f1 = 1;
			}
		}
		printf("No\n");
		return 0;
	}
	if (k == 3)
	{
		for (int i = 1; i <= n; ++i)
		{
			if ((mp[1][i] == 0 && mp[2][i] == 0) || (mp[2][i] == 0 && mp[3][i] == 0) || (mp[3][i] == 0 && mp[1][i] == 0))
			{
				printf("Yes\n");return 0;
			}
		}
		printf("No\n");
		return 0;
	}
	if (k == 4)
	{
		int tmp[10];
		memset(tmp, 0, sizeof(tmp));
		for (int i = 1; i <= n; ++i)
		{
			int sum = 0;
			if (mp[1][i] == 0) sum++;
			if (mp[2][i] == 0) sum++;
			if (mp[3][i] == 0) sum++;
			if (mp[4][i] == 0) sum++;
			if (sum >= 3)
			{
				printf("Yes\n");return 0;
			}
			if (mp[1][i] == 0 && mp[2][i] == 0) tmp[1] = 1;
			if (mp[1][i] == 0 && mp[3][i] == 0) tmp[2] = 1;
			if (mp[1][i] == 0 && mp[4][i] == 0) tmp[3] = 1;
			if (mp[2][i] == 0 && mp[3][i] == 0) tmp[4] = 1;
			if (mp[2][i] == 0 && mp[4][i] == 0) tmp[5] = 1;
			if (mp[4][i] == 0 && mp[3][i] == 0) tmp[6] = 1;
		}
		if ((tmp[1] && tmp[6]) || (tmp[5] && tmp[2]) || (tmp[3] && tmp[4]))
		{
			printf("Yes\n");return 0;
		}
		printf("No\n");
		return 0;
	}
	return 0;
}