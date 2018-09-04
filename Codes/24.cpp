#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100005];
int main(void)
{
	double ans;
	int n, m, i;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	sort(a+1, a+n+1);
	ans = max(a[1], m-a[n]);
	for(i=1;i<=n-1;i++)
		ans = max(ans, (a[i+1]-a[i])/2.0);
	printf("%.10f\n", ans);
	return 0;
}