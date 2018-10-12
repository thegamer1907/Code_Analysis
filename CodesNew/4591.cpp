#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]>=a[ans]*2) ans++;
	}
	if(ans>n/2) ans=n/2;
	cout<<n-ans<<endl;
}