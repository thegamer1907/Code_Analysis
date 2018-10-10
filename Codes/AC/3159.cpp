#include<bits/stdc++.h>
using namespace std;
int n,a[100005],m,ans;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a[i]+=n-i-1;
	}
	m=a[0]/n;
	for(int i=1;i<n;i++)
	{
		if(a[i]/n<m)
		{
			m=a[i]/n;
			ans=i;
		}
	}
	cout<<ans+1;
	return 0;
}