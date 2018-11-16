#include<stdio.h>
char str[555][555];
int s1[555][555], s2[555][555];
int main(void)
{
	int n, m, i, j, q, x1, x2, y1, y2;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		scanf("%s", str[i]+1);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			s2[i][j] = s2[i][j-1]+s2[i-1][j]-s2[i-1][j-1];
			if(str[i][j]==str[i][j-1] && str[i][j]=='.')
				s2[i][j]++;
			s1[i][j] = s1[i-1][j]+s1[i][j-1]-s1[i-1][j-1];
			if(str[i][j]==str[i-1][j] && str[i][j]=='.')
				s1[i][j]++;
		}
	}
	scanf("%d", &q);
	while(q--)
	{
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		printf("%d\n", s1[x2][y2]-s1[x1][y2]-s1[x2][y1-1]+s1[x1][y1-1]+s2[x2][y2]-s2[x1-1][y2]-s2[x2][y1]+s2[x1-1][y1]);
	}
	return 0;
}