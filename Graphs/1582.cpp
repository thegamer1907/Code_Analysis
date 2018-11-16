#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,t,k,l,n;
	cin>>n>>k;
	int arr[n+1];
	for(i=1;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=n; )
	{
		i+=arr[i];
		if(i==k)
		{
			cout<<"YES"<<endl;
			break;
		}
		if(i>k)
		{
			cout<<"NO"<<endl;
			break;
		}
	}
	return 0;
}