#include<map>
#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int n,a[110],sum[110];

int main()
{
	scanf("%d",&n);
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum[i]=sum[i-1]+(a[i]==0?1:-1);
		cnt+=a[i]==1;
	}
	int ans=-0x3f3f3f3f;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			ans=max(sum[i]-sum[j],ans);
		}
	}
	printf("%d\n",cnt+ans);
}