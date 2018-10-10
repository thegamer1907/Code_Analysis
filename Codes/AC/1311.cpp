#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<queue>
using namespace std;
int n,m;
string s[1001],t[1001];
char c[1001];
int main()
{
	int i,j;
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++)
	{
		scanf("%s",c);
		s[i].assign(c);
	}
	for (i=1;i<=m;i++)
	{
		scanf("%s",c);
		t[i].assign(c);
	}
	int common=0;
	for (i=1;i<=n;i++)
		for (j=1;j<=m;j++)
			if (s[i]==t[j]) common++;
	if (common&1)
	{
		if (n>m-1) puts("YES");
		else puts("NO");
	}
	else
	{
		if (n>m) puts("YES");
		else puts("NO");
	}
	return 0;
}
