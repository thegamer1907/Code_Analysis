#include<bits/stdc++.h>
using namespace std;
int n,t,j=1,a[200000];
int main()
{
	cin>>n>>t;
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
	}
	while(j<t)
	{
		j+=a[j];
	}
	if(j==t)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}