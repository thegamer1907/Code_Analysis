#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#define ll long long
using namespace std;
int q[100010];
int main()
{
	ll n,m,k;
	scanf("%I64d I64d I64d",&n,&m,&k);
	for(int i=1;i<=m;i++)
	{
		scanf("%I64d",&q[i]);
	}
	int ans=0;
	int sum=0;
	int now=1;
	while(now<=m)
	{
		ll r=((q[now]-sum-1)/k+1)*k+sum;
		while(now<=m&&q[now]<=r)
		{
			sum++;
			now++;
		}
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}