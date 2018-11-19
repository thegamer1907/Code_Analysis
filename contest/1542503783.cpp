#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;

struct node
{
	char a;
	char b;
}c[117];

char x[3];

int main()
{
	int i, j, n, flag = 0;
	scanf("%c%c", &x[0], &x[1]);
	scanf("%d", &n);
	getchar();
	for(i = 1; i <= n; i++)
	{
		scanf("%c%c", &c[i].a, &c[i].b);
		getchar();
		if(c[i].a == x[0] && c[i].b == x[1])
		flag = 1;
		if(c[i].a == x[1] && c[i].b == x[0])
		flag  = 1;
	}
	if(flag)
	{
		printf("YES\n");
		return 0;
	}
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(i == j) continue;
			if(c[i].b == x[0] && c[j].a == x[1])
			flag = 1;
			if(c[i].a == x[1] && c[j].b == x[0])
			flag = 1;
			if(flag) break;
		}
	}
	if(flag) printf("YES\n");
	else printf("NO\n");
	return 0;
}