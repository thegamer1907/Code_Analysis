#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int a[110],b[110],c[110];
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d%d%d",&a[i],&b[i],&c[i]);
		}
		int x,y,z;
		x=y=z=0;
		for(int i=0;i<n;i++)
		{
			x+=a[i];
			y+=b[i];
			z+=c[i];
		}
		if(x==0&&y==0&&z==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}