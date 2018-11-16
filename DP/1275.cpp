#include<stdio.h>
main()
{
	int r=0,i,j,t1=0,n,c1=0,c0=0,max=0,k1=0,k0=c0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	if(a[i]==1)
	t1++;
	else
	r=1;}
	if(r==0)
	{printf("%d",n-1);
	return 0;}	
	for(i=0;i<n;i++)
	{
        c0=0;c1=0;
		for(j=i;j<n;j++)
		{
			if(a[j]==1)
			c1++;
			else
			c0++;
			if(c0-c1>max)
			{
				max=c0-c1;
				k0=c0;
				k1=c1;
			}
		}
	}
	printf("%d",k0+t1-k1);
}