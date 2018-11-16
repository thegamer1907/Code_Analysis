#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,t=0;
	cin>>n;
	int a[n];
	int ans=0;
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		t+=a[i];
	}
	for(int i=0;i<n;i++)
	{
		s=0;
		for(int j=0;j+i<n;j++)
		{
			if(a[i+j]==0) s++;
			else s--;
			ans=max(ans,s+t);
		}
	}
	cout<<ans;
	return 0;
}
