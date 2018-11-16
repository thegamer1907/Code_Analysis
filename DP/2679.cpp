#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define ll long long
char s1[55], s2[55];
int num, ans, s, len;
void dfs_1(int x, int loc)
{
	if (x >= len)
	{
		num = loc;
		return;
	}
	if (s1[x] == '+')
		dfs_1(x + 1, loc + 1);
	else
		dfs_1(x + 1, loc - 1);
}
void dfs_2(int x, int loc)
{
	if (x >= len)
	{
		s++;
		if (loc == num) ans++;
		return;
	}
	if (s2[x] == '+')
		dfs_2(x + 1, loc + 1);
	else if (s2[x] == '-')
		dfs_2(x + 1, loc - 1);
	else
	{
		dfs_2(x + 1, loc + 1);
		dfs_2(x + 1, loc - 1);
	}
}
int main()
{
	ll n, now, k, d;
	scanf("%s%s", s1, s2);
	len = strlen(s1);
	dfs_1(0, 0);
	dfs_2(0, 0);
	printf("%.10f\n", (double)ans / s);
	return 0;
}
