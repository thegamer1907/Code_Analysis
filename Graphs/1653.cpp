#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,a[30010];
	scanf("%d %d",&n,&m);
	for(i=1,k=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1;i<n;i++)
	{
		l = a[i] + i;
		i = l-1;
		if(l==m)
		{
			printf("YES\n");
			k=1;
			break;
		}
	}
	if(k==0)
	{
		printf("NO\n");
	}
	return 0;
}