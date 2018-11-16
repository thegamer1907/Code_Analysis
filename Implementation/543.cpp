#include<cstdio>
#include<cstring>
int a[100];
int main()
{
	int n,k,i,ans=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	if(a[k]>0)
	{
	for(i=k+1;i<=n;i++)
	{
		if(a[i]<a[k])
		break;
	}
	printf("%d\n",i-1);
	}
	else
	{
		int j;
		for(j=1;j<=n;j++)
		{if(a[j]<=0)
		break;
		}
		printf("%d\n",j-1);
	}


	return 0;	
}