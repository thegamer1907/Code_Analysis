#include<bits/stdc++.h>
using namespace std;
#define N 100001
#define LL long long
LL n,s,a[N],b[N];
LL check(LL k)
{
	LL res=0;
	for(LL i=1;i<=n;i++)
	  b[i]=a[i]+i*k;
	sort(b+1,b+n+1);
	for(LL i=1;i<=k;i++)
	  res+=b[i];
	return res;
}
int main()
{
	scanf("%I64d%I64d",&n,&s);
	for(LL i=1;i<=n;i++)
	  scanf("%I64d",&a[i]);
	LL l=0,r=n;
	while(l<r)
	  {
	  LL mid=l+r+1>>1;
	  if(check(mid)<=s)l=mid;
	  else r=mid-1;
	  }
	printf("%I64d %I64d\n",l,check(l));
	return 0;
}
