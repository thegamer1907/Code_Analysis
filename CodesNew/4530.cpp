#include<bits/stdc++.h>
using namespace std;
int ans;
main()
{
	int n,i,x;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;++i)cin>>a[i];
	sort(a+1,a+1+n);
	int r=n,l=r/2;
	for(i=l;i>0;--i)
		if(a[i]*2<=a[r])--r;
	cout<<r;
}