#include<stdio.h>
int flag[100005];
int a[1025][5];
int main(void)
{
	int n, k, i, j, Hash, cnt, p;
	scanf("%d%d", &n, &k);
	cnt = 0;
	for(i=1;i<=n;i++)
	{
		Hash = 0, cnt++;
		for(j=1;j<=k;j++)
		{
			scanf("%d", &a[cnt][j]);
			Hash = Hash*2+a[cnt][j];
		}
		if(Hash==0)
		{
			printf("YES\n");
			return 0;
		}
		if(flag[Hash])
			cnt--;
		else
			flag[Hash] = 1;
	}
	for(i=1;i<=cnt;i++)
	{
		for(j=i+1;j<=cnt;j++)
		{
			for(p=1;p<=k;p++)
			{
				if(a[i][p]==1 && a[j][p]==1)
					break;
			}
			if(p==k+1)
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}