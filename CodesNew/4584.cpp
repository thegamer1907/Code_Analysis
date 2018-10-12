#include<bits/stdc++.h>
using namespace std;
long long n,a[5000005],b[5000005],c[5000005];
int main()
{
	cin>>n;
	if (n==1)
	{
		cout<<1;
		return 0;
	}
	for (long long i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for (long long i=1;i<=n/2;i++)
	b[i]=a[i];
	for (long long i=n/2+1;i<=n;i++)
	c[i-n/2]=a[i];
	long long bx=n/2,cx=n-n/2;
	while (1)
	{
		if (b[bx]<=c[cx]/2)
		{
			bx--;
			cx--;
		}
		else
		{
			bx--;
		}
		if (bx<=0)
		{
			cout<<n/2+cx;
			return 0;
		}
	}
	cout<<n;
	return 0;
}