#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#include <functional>

using namespace std;

#define LL long long
const int INF = 0x3f3f3f3f;

/*int h, m, s, t1, t2;

int main()
{
	while (~scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2))
	{
		int x1, x2, x3, x4, x5;
		x1 = h % 12 * 30, x2 = m * 6, x3 = s * 6;
		x4 = t1 % 12 * 30, x5 = t2 % 12 * 30;
		if (x4 > x5) swap(x4, x5);
		int flag = 1, flag1;
		
	}
	return 0;
}*/

int n, k;
int a, x[20];

int main()
{
	while (~scanf("%d%d", &n, &k))
	{
		memset(x, 0, sizeof x);
		for (int i = 1; i <= n; i++)
		{
			int kk = 0;
			for (int j = 0; j < k; j++)
			{
				scanf("%d", &a);
				kk = kk * 2 + a;
			}
			x[kk] = 1;
		}
		int flag = 0;
		for (int i = 0; i < 16; i++)
		{
			if (!x[i]) continue;
			for (int j = i; j < 16; j++)
			{
				if (!x[j]) continue;
				if ((i&j) == 0) flag = 1;
			}
		}
		if (flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}