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
char str[1000005];
int sum[1000005];
int main(void)
{
	LL ans;
	int p, n, k, i;
	scanf("%d%s", &k, str+1);
	n = strlen(str+1);
	ans = p = 0;
	sum[p] = 1;
	for(i=1;i<=n;i++)
	{
		if(str[i]=='1')
			p++;
		sum[p]++;
	}
	p = 0;
	for(i=1;i<=n;i++)
	{
		if(str[i]=='1')
			p++;
		if(k==0)
		{
			ans += (LL)sum[p]*(sum[p]-1)/2;
			sum[p] = 0;
		}
		else if(p-k>=0)
			ans += sum[p-k];
	}
	printf("%lld\n", ans);
	return 0;
}