#include<stdio.h>
#include<algorithm>
using namespace std;
int a[105];
int main(void)
{
	int n, i, mx, mn;
	scanf("%d", &n);
	mx = -5, mn = 105;
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		mn = min(mn, a[i]);
		mx = max(mx, a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==mx)
		{
			mx = i;
			break;
		}
	}
	for(i=n;i>=1;i--)
	{
		if(a[i]==mn)
		{
			mn = i;
			break;
		}
	}
	if(mx>=mn)
		printf("%d\n", n-mn+mx-2);
	else
		printf("%d\n", n-mn+mx-1);
	return 0;
}