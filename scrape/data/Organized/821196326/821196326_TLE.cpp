#include <stdio.h>
#include <string.h>
int main()
{
	long long n,m,k,i,j;
	long long a[100005];
	int b[100005];
	int c[100005];
	scanf("%lld %lld %lld",&n,&m,&k);
	for(i=1;i<=m;i++) 
	{
		scanf("%lld",&a[i]);
		a[i]--;
		c[i]=a[i]%k;
		b[i]=a[i]/k;
	}
	int ans=0;
	int p=0;
	int num=0;
	for(i=1;i<=m;i++)
	{
	//	printf("%d %d %d %d\n",i,j,p,ans);
		for(j=i;j<=m;j++)
		{
			if(b[j]!=p) break;
		}
		num=j-i;
		if(num==0)
		{
			p++;
			i--;
			continue;
		}
		for(int l=j;l<=m;l++)
		{
			c[l]-=num;
			while(c[l]<0) 
			{
				c[l]+=k;
				b[l]--;
			 } 
		}
		ans++;
		if(j>i) i=j-1;
	}
	
	printf("%d\n",ans);
	return 0;
}