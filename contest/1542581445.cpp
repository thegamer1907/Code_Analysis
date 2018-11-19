#include<stdio.h>
int i,f[233333],a1,a2,a3,a4,g[233333],an,n,k,j;
int main()
{
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a1);
		if(k>=2)
		{
			scanf("%d",&a2);
			if(k>=3)
			{
				scanf("%d",&a3);
				if(k>=4)
				{
					scanf("%d",&a4);
				}
			}
		}
		f[a1*8+a2*4+a3*2+a4]=1;
	}
	if(f[0]==1)
	{
		an=1;
	}
	for(i=0;i<=15;i++)
	{
		for(j=0;j<=15;j++)
		{
			if(f[i]&&f[j]&&((i&j)==0))
			an=1;
		}
	}
	if(an==0)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
}
