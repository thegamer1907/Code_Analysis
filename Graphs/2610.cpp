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
int fa[100005];
int Find(int x)
{
	if(fa[x]==0)
		return x;
	return fa[x] = Find(fa[x]);
}
int main(void)
{
	int n, i, x, t1, t2, ans;
	scanf("%d", &n);
	ans = n;
	for(i=1;i<=n;i++)
	{
		scanf("%d", &x);
		t1 = Find(x);
		t2 = Find(i);
		if(t1!=t2)
		{
			fa[t1] = t2;
			ans--;
		}
	}
	printf("%d\n", ans);
	return 0;
}