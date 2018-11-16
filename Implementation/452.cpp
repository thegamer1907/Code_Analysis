#include<stdio.h>
int main()
{
	int n,k,i,ans=0;
	scanf ("%d%d",&n,&k);
	int a[51];
	for (i=0;i<n;i++) 
	scanf ("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		if (a[i]&&a[i]>=a[k-1])
		ans++;
	}
	printf ("%d\n",ans);
}
