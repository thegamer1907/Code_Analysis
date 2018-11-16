#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
#include<string>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>
#include<set>
using namespace std;
#define LL long long
#define mod 1000000007
set<int> st[100005];
int col[100005], flag[100005];
int main(void)
{
	int n, m, x, y, i;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &col[i]);
		flag[col[i]] = 1;
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d%d", &x, &y);
		if(col[x]!=col[y])
		{
			st[col[x]].insert(col[y]);
			st[col[y]].insert(col[x]);
		}
	}
	x = -1, y = -1;
	for(i=1;i<=100000;i++)
	{
		if((int)st[i].size()>x && flag[i])
		{
			x = st[i].size(), y = i;
		}
	}
	printf("%d\n", y);
	return 0;
}