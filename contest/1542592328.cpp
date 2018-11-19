#include<stdio.h>
char str[105][3];
int main(void)
{
	int n, i, j, ok;
	char a, b;
	scanf(" %c %c%d", &a, &b, &n);
	for(i=1;i<=n;i++)
		scanf(" %c %c", &str[i][1], &str[i][2]);
	ok = 0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(str[i][1]==a && str[i][2]==b || str[j][1]==a && str[j][2]==b || str[i][2]==a && str[j][1]==b)
				ok = 1;
		}
	}
	if(ok)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}