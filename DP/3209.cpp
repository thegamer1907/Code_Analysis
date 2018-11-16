#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int b[105], a[105];
int main(void)
{
	int cnt, n, i, m, now;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	now = cnt = 0;
	for(i=1;i<=n-1;i++)
	{
		if(a[i]%2)
			now++;
		else
			now--;
		if(now==0)
			b[++cnt] = abs(a[i+1]-a[i]);
	}
	sort(b+1, b+cnt+1);
	now = 0;
	for(i=1;i<=cnt;i++)
	{
		if(now+b[i]>m)
			break;
		now += b[i];
	}
	printf("%d\n", i-1);
	return 0;
}