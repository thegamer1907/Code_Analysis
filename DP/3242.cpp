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
map<LL, LL> p;
LL a[200005], L[200005], R[200005];
int main(void)
{
	LL ans;
	int n, k, i;
	scanf("%d%d", &n, &k);
	for(i=1;i<=n;i++)
		scanf("%lld", &a[i]);
	ans = 0;
	for(i=1;i<=n;i++)
	{
		if(a[i]%k==0)
			L[i] = p[a[i]/k];
		p[a[i]]++;
	}
	p.clear();
	for(i=n;i>=1;i--)
	{
		R[i] = p[a[i]*k];
		p[a[i]]++;
		ans += L[i]*R[i];
	}
	printf("%lld\n", ans);
	return 0;
}