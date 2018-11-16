#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	int* trans= new int[n];

	for(int i=1;i<n;i++)
		cin>>trans[i];
	int i=1;
	while(i<=n)
	{
		if(i==t)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		if(i==n)
			break;
		i= i+trans[i];
	}
	cout<<"NO"<<endl;
	return 0;
} 