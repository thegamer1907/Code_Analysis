#include<iostream>
#include<cstdio>
#define MAXN 100005
#include<cmath>
#define INF 1000000005
#define LL long long
#include<iomanip>
using namespace std;
int n;
int a[MAXN];
LL sum, maxr;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
		if(a[i]>maxr)
		{
			maxr=a[i];
		}
	}
	LL ans=0;
	if(sum%(n-1)==0)
	{
		ans=sum/(n-1);
	}
	else 
	{
		ans=sum/(n-1)+1;
	}
	
	ans=max(ans,maxr);
	cout<<ans;
	return 0;
}