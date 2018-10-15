#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

#define MAXN 300010

long long a[MAXN];
long long maxn=0;
long long sum;
int n;
long long res=0;

bool check(long long x)
{
	long long sum=0;
	for(int i=1;i<=n;i++) sum+=(x-a[i]);
	if(sum>=x) return 1;
	return 0;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%I64d",&a[i]),maxn=max(a[i],maxn),sum+=a[i];
	long long l=maxn,r=sum;
	while(l<=r)
	{
		long long mid=(l+r)>>1;
		if(check(mid)) res=mid,r=mid-1;
		else l=mid+1;
	}
	cout<<res;
	return 0;
}