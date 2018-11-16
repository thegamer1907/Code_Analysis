#include<bits/stdc++.h>


using namespace std;


int main()
{
	int n,x;
	cin>>n>>x;
	int a[n-1];
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
	}
	int t=1;
	while(t!=n)
	{
		t=t+a[t-1];
		if(t==x)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";

}