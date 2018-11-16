#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
#include<string>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
#define LL long long
#define mod 1000000007
int sum[10000005], pri[800005];
LL ans[800005];
bool flag[10000005];
int main(void)
{
	LL j;
	int n, i, x, cnt, now, T, l, r;
	flag[0] = flag[1] = 1;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &x);
		sum[x]++;
	}
	cnt = 0;
	for(i=2;i<=10000000;i++)
	{
		if(flag[i])
			continue;
		now = 0;
		pri[++cnt] = i;
		for(j=(LL)i;j<=10000000;j+=i)
			now += sum[j], flag[j] = 1;
		ans[cnt] = now;
	}
	for(i=1;i<=cnt;i++)
		ans[i] += ans[i-1];
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d%d", &l, &r);
		l = lower_bound(pri+1, pri+cnt+1, l)-pri;
		r = upper_bound(pri+1, pri+cnt+1, r)-pri-1;
		printf("%lld\n", ans[r]-ans[l-1]);
	}
	return 0;
}