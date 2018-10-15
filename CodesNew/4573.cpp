#include<bits/stdc++.h>
using namespace std;
int a[1000001]={0};
int main()
{
	long long n,m,i,j,l,r,ans,t;
	cin>>n;
	ans=n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	sort(a,a+n+1);
	l=(1+n)/2;
	r=n;
	while(l>=1&&r>(1+n)/2)
	{
		if(a[r]/2>=a[l])
		{
			r--;
			l--;
			ans--;
		}
		else
		l--;
	}
	cout<<ans<<endl;
	return 0;
}