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
int n, f, l;
char s[105][5];
int main(int argc, char const *argv[])
{
	scanf("%s", s[1]);
	scanf("%d", &n);
	for (int i = 2; i <= n+1; ++i) scanf("%s", s[i]);
	for (int i = 2; i <= n+1; ++i)
	{
		if (s[i][0] == s[1][1] && s[i][1] == s[1][0])
		{
			printf("YES\n");
			return 0;
		}
	}
	for (int i = 2; i <= n+1; ++i)
	{
		if (s[i][0] == s[1][0] && s[i][1] == s[1][1])
		{
			printf("YES\n");
			return 0;
		}
		if (s[i][0] == s[1][1])
		{
			for (int j = 2; j <= n+1; ++j)
			{
				if (i == j) continue;
				if (s[j][1] == s[1][0])
				{
					printf("YES\n");
					return 0;
				}
			}
		}
		if (s[3][1] == s[1][0])
		{
			for (int j = 2; j <= n+1; ++j)
			{
				if (i == j) continue;
				if (s[j][0] == s[1][1])
				{
					printf("YES\n");
					return 0;
				}
			}
		}
	}
	printf("NO\n");
	return 0;
}