#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
using namespace std;
#define MAXN 1000100
int n, flag1, flag2;
char c[5], s[5];
int main()
{
	scanf("%s",c+1);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s+1);
		if(s[2] == c[1]) flag1 = 1;
		if(s[1] == c[2]) flag2 = 1;
		if(s[1] == c[1] && s[2] == c[2])
		{
			printf("YES\n");
			return 0;
		}
	}
	if(flag1 == 1 && flag2 == 1) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}