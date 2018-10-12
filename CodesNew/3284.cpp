#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long LL;
LL a[100010];
bool check(LL mid,int n)
{
	LL t = 0;
	for(int i = 1;i<= n;i++)
	{
		t += mid - a[i];
	}
	return t >= mid;
}
int main(int argc, char const *argv[])
{
	int n;scanf("%d",&n);
	LL l = 0;
	for(int i = 1;i<= n;i++)scanf("%I64d",&a[i]),l = max(l,a[i]);
	LL r = 1e18+10;
	while(l<=r)
	{
		LL mid = (l+r)/2;
		if(check(mid,n))
		{
			r = mid - 1;
		}
		else l = mid+1;
	}
	printf("%I64d\n",l );
	return 0;
}