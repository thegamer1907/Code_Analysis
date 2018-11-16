#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int n,t,flag=0;
	cin>>n>>t;
	n--;t--;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	long int x=0;
	while(x<n)
	{
		x=x+arr[x];
		if(x==t) {flag=1;break;}
	}
	if(flag==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}