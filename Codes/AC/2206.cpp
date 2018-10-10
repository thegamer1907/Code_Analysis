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
LL a[200005];
int main(void)
{
	int n, i, p, q;
	LL s1, s2, ans;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%lld", &a[i]);
	ans = s1 = s2 = 0;
	p = 1, q = n;
	while(p<=q)
	{
		if(s1==s2)
			ans = max(ans, s2);
		if(s1<=s2)
			s1 += a[p++];
		else
			s2 += a[q--];
	}
	if(s1==s2)
		ans = max(ans, s1);
	printf("%lld\n", ans);
	return 0;
}