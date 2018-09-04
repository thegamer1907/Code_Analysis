#include<stdio.h>
#include<algorithm>
using namespace std;
#define LL long long
typedef struct Res
{
	int x, val;
	bool operator < (const Res &b) const
	{
		if(x<b.x)
			return 1;
		return 0;
	}
}Res;
Res s[100005];
int main(void)
{
	LL ans, now;
	int n, d, i, p;
	scanf("%d%d", &n, &d);
	for(i=1;i<=n;i++)
		scanf("%d%d", &s[i].x, &s[i].val);
	sort(s+1, s+n+1);
	ans = now = 0, p = 1;
	for(i=1;i<=n;i++)
	{
		now += s[i].val;
		while(s[p].x+d<=s[i].x && p<=i)
			now -= s[p++].val;
		ans = max(ans, now);
	}
	printf("%lld\n", ans);
	return 0;
}