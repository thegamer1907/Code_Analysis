#include<stdio.h>
#include<algorithm>
using namespace std;
int a[105], b[105];
int main(void)
{
	int n, k, i, p, ok;
	scanf("%d%d", &n, &k);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=k;i++)
		scanf("%d", &b[i]);
	sort(b+1, b+k+1);
	ok = 1, p = k;
	for(i=1;i<=n;i++)
	{
		if(a[i]==0)
			a[i] = b[p--];
	}
	for(i=2;i<=n;i++)
	{
		if(a[i]<a[i-1])
			ok = 0;
	}
	if(ok)
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}