#include<iostream>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	int a[n],i;
	for(i=1;i<=n-1;i++)
		cin>>a[i];
	int s = 1;
	while(s<=t)
	{
		if(s==t)
		{
			cout<<"YES\n";
			break;
		}
		s = s+ a[s];
	}
	if(s!=t)
		cout<<"NO\n";
}