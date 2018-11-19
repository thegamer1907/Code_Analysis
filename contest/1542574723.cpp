#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,k,x,f,sum,vis[16];
	while(~scanf("%d%d",&n,&k))
	{
		memset(vis,0,sizeof(vis));
		for(i=0;i<n;i++)
		{
			sum=0;
			for(j=0;j<k;j++)
			{
				scanf("%d",&x);
				sum<<=1;
				sum+=x;				
			}
			//printf("sum=%d\n",sum);
			vis[sum]=1;
		}
		f=0;
		if(vis[0]) f=1;
		for(i=0;i<16;i++)
		{
			if(f) break;
			if(vis[i])
			{
				for(j=i+1;j<16;j++)
					if(vis[j]&&((i&j)==0))
					{
						f=1;
						break;
					}
			}			
		}
		if(f) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}