#include<bits/stdc++.h>
using namespace std;
int a[500001]={0};
int main()
{
	int n,i,tot,l,r;
	cin>>n;
	for (i=1;i<=n;i++)
	  cin>>a[i];
	sort(a+1,a+n+1);
	l=(1+n)/2;
	r=n;
	tot=n;
	while (r>=(1+n)/2+1&&l>=1)
	{
		if (a[r]>=2*a[l])
		{
			tot--;
			r--;
			l--;
		}
		else
		  l--;
	}
	cout<<tot;
	return 0;
}