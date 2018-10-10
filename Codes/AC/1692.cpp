#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#define ll long long
using namespace std;

ll n,m,k;

bool check(ll x)
{
	ll cnt = 0;
	for (int i=1;i<=n;i++)
	{
		if (i*m<x) cnt+=m;
		else
		{
			cnt += x/i;
			if (x % i==0) cnt--;
		}
	}
	return cnt<k;
}

int main()
{
	ll l,r,mid;
	scanf("%I64d %I64d %I64d",&n,&m,&k);
	l = 1; r = m*n+1;
	while (r-l>1) 
	{
		mid = (l+r)>>1;
		if (check(mid)) l = mid;
		else
			r = mid;
	}
	printf("%I64d\n",l);
	
	return 0;
}