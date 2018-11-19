#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
char a[105], b[105];
int i, j ,n;
int flag1, flag2, flag3;
int main()
{
	scanf("%s", a);
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		memset(b, 0, sizeof(char));
			scanf("%s", b);
		if(a[0] == b[0] && a[1] == b[1])
			flag1 = 1;
		if(a[0] == b[1])
			flag2 = 1;
		if(a[1] == b[0])
			flag3 = 1;
	}
	if(flag1 == 1)
		printf("YES\n");
	else if(flag2 == 1 && flag3 == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
		      	   		   	  			   	  	