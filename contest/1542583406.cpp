#include<stdio.h>
char a1,b1,a[23333],b[23333];
int i,j,n;
int main()
{
	scanf(" %c%c",&a1,&b1);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf(" %c%c",&a[i],&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((b[i]==a1&&a[j]==b1)||(a[i]==a1&&b[i]==b1))
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
}
