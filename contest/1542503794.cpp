#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n,flag1=0,flag2=0;
	char a[3];
	char b[3];
	scanf("%s",a);
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",b);
		if(strcmp(a,b)==0)
		{
			flag1=1;
			flag2=1;
		}
		else
		{
			if(b[1]==a[0])
			{
				flag1=1;
			}
			if(b[0]==a[1])
			{
				flag2=1;
			}
		}
	}
	if(flag1==1&&flag2==1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}