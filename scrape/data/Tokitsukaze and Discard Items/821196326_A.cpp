#include <stdio.h>
#include <string.h>
int main()
{
	long long a[100005];
	long long n,m,k,i,j;
	scanf("%lld %lld %lld",&n,&m,&k);
	for(i=1;i<=m;i++) scanf("%lld",&a[i]);
	int ans=0;
	int p=1;
	while(p<=m)
	{
		int p1=p;
		while(p1<m&&(a[p1+1]-p)/k==(a[p]-p)/k) p1++;
		ans++;
		p=p1+1;
	}
	printf("%d\n",ans);
	return 0;
}