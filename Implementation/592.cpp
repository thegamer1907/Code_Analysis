#include<stdio.h>
int main()
{
	int n,m,i,j,k,l,a[51],cnt=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	j=a[m];

	cnt=0;
	for(i=1;i<=n;i++)
	{
		if(a[i]>=a[m] && a[i]>0)
		{
			cnt=cnt+1;
		}
	}
	printf("%d\n",cnt);
}


