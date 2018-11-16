#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{   int n;
	cin>>n;
	int a[n+1];
	a[0]=0;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			count++;
			a[i]=-1;
		}
		else
			a[i]=1;
	}
	for(int i=1;i<=n;i++)
    a[i]+=a[i-1];
	int ans=-1e16;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int change=a[j]-a[i-1];
			ans=max(ans,change);
		}
	}
	cout<<ans+count;
}