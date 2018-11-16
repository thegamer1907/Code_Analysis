#include<stdio.h>
int main()
{
	int n,k,t[1000],i,c=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(t[i]>=t[k] && t[i]!=0)
		{
			c=c+1;
		}
	}
	printf("%d\n",c);
}
