#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char p[110][4];
char s[4];
int main()
{
	scanf("%s", s);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", p[i]);
	}
	int ans = 0, f1 = 0, f2 = 0;
	for (int i = 0; i < n; i++)
	{
		if(strcmp(p[i],s)==0)
		{
			ans = 1;
			break;
		}
		if (p[i][0] == s[1]) f1 = 1;
		if (p[i][1] == s[0]) f2 = 1;
	}
	if (f1 == 1 && f2 == 1)
		ans = 1;
	if (ans == 1)
		puts("YES");
	else puts("NO");

}