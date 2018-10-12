#include<bits/stdc++.h>
using namespace std;
long long n,a[500001],i,j,s,l,r;
int main()
{
	scanf("%lld",&n);
	s=n;
	for(i=1;i<=n;i++)
	scanf("%lld",&a[i]);
	sort(a+1,a+n+1);
	r=n;
	l=n/2;
	while(l)
	{
		if(a[l]<=a[r]/2)
		{
			l--;
			r--;
			s--;
		}
		else l--;
	}
	printf("%lld",s);
	return 0;
}