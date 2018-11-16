#include<bits/stdc++.h>

using namespace std;
long long s[105],sum,now;
int main()
{
	long long n,ans=0,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		s[i]=s[i-1]+x;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			sum=j-i+1;
			now=s[i-1]+s[n]-s[j]+sum-(s[j]-s[i-1]);
			ans=max(ans,now);
		}
	}
	cout<<ans;
	return 0;
}