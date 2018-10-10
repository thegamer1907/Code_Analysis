#include <bits/stdc++.h>
using namespace std;
unsigned long long n,s,a[100005],b[100005],l,r,mid,ans1,ans2;
int check(int x)
{
	unsigned long long an=0;
	
	for (int i=1; i<=n; i++)
		b[i]=a[i]+x*i;
	
	sort(b+1,b+n+1);
	
	for (int i=1; i<=x; i++)
	{
		an=an+b[i];
	}
		
	if (an<=s)
	{
		ans1=x;
		ans2=an;
		return 1;
	}
	
	return 0;
}
main ()
{
	cin>>n>>s;
	
	for (int i=1; i<=n; i++)
		scanf("%I64d",&a[i]);
	
	l=1;
	r=n;
	
	while (l<=r)
	{
		mid=(l+r)/2;
		
		if (check(mid)) l=mid+1; 
				   else r=mid-1;  
	}
	
	cout<<ans1<<" "<<ans2<<endl;
}