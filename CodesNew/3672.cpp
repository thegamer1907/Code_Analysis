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
int a[100005];
int main(void)
{
	int n, m, i, p;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	p = m;
	sort(a+1, a+n+1);
	for(i=1;i<=n;i++)
		m -= a[n]-a[i];
	if(m>=1)
		printf("%d %d\n", (m-1)/n+1+a[n], a[n]+p);
	else
		printf("%d %d\n", a[n], a[n]+p);
	return 0;
}