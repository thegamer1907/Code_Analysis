#include <bits/stdc++.h>
using namespace std;
#define MX		1000
char a[4];
char b[MX][4];
int main(int argc, char const *argv[])
{
	int n;
	scanf("%s",a);
	char t = a[0],q = a[1];
	scanf("%d",&n);
	int fa = 0,fb =0;
	for (int i = 1; i <= n; ++i)
	{
		scanf("%s",a);
		if(a[1]== t)fa = 1;
		if(a[0] == q)fb = 1;
		if(a[0] == t&&a[1] == q)fa = fb = 1;
	}
	if(fa&&fb)
	{
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}