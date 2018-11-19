#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
char s[10],s1[10];
int n;
int main()
{
	scanf("%s",s);
	scanf("%d",&n);
	bool flag1=false,flag2=false;
	for (int i=1;i<=n;i++)
	{
		scanf("%s",s1);
		if (s[0]==s1[0]&&s[1]==s1[1]) flag1=flag2=true;
		if (s1[1]==s[0]) flag1=true;
		if (s1[0]==s[1]) flag2=true;
	}
	if (flag1&&flag2) puts("YES");else puts("NO");
	return 0;
}