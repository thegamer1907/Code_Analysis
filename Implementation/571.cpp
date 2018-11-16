#include <cstdio>
int a[150],n,m,ans;
int main()
{
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]); 
	}
	for (int i=1;i<=n;i++)
	{
		if (a[i]>=a[m] && a[i]>0)
		ans++;
	}
	printf("%d\n",ans);
}
