#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
char str[105][2], b[2];
int main()
{
	int n, i, j, k;
	scanf("%s", b);
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		scanf("%s", str[i]);
		if (str[i][0] == b[0] && str[i][1] == b[1])
		{
			printf("YES\n");
			return 0;
		}
	}
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n;j++)
		{
			if (str[i][1] == b[0] && str[j][0] == b[1])
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
}