#include<cstdio>
int n,k,a[20],b[10];
int main()
{
	scanf("%d%d",&n,&k);
	while(n--)
	{
		for(int i=0;i<k;i++)scanf("%d",b+i);
		a[b[0]+b[1]*2+b[2]*4+b[3]*8]++;
	}
	for(int i=0;i<=(1<<k);i++)
		for(int j=0;j<=(1<<k);j++)
			if(!(i&j)&&a[i]&&a[j]){puts("YES");return 0;}
	puts("NO");
	return 0;
}