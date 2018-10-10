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
char str[100005];
int a[100005], b[100005];
int main(void)
{
	int n, m, i, s1, s2, ans;
	scanf("%d%d%s", &n, &m, str+1);
	s1 = s2 = ans = 0;
	for(i=1;i<=n;i++)
	{
		if(str[i]=='a')
			a[++s1] = i;
		else
			b[++s2] = i;
	}
	for(i=0;i<=s1;i++)
	{
		if(i+m+1>s1)
			ans = max(ans, n-a[i]);
		else
			ans = max(ans, a[i+m+1]-a[i]-1);
	}
	for(i=0;i<=s2;i++)
	{
		if(i+m+1>s2)
			ans = max(ans, n-b[i]);
		else
			ans = max(ans, b[i+m+1]-b[i]-1);
	}
	printf("%d\n", ans);
	return 0;
}