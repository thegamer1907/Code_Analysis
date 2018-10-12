#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int n,a[500005];
bool check(int x)
{
	int p=x+1;
	for(int i=1;i<=x;i++)
	{
		while(a[p]<2*a[i]&&p<=n) p++;
		if (p>=n+1) return false;
		p++;
	}
	return true;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+1+n);
	int l=0,r=n,ans;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(check(mid)) ans=mid,l=mid+1;
		else r=mid-1;
	}
	printf("%d",n-ans);
	return 0;
}