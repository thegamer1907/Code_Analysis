#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t;vector<long long int>v;int tt=0;
	cin>>n>>t;
	for(long long int i=0;i<n-1;i++)
	{
		long long int temp;
		cin>>temp;
		v.push_back(temp + i+1);
	}
/*	for(long long int i=0;i<n-1;i++)
	{
		cout<<i+1<<" "<<v[i]<<"\n";
	}*/
		long long int i=1;
	while(v[i-1]<=n)
	{
		if(v[i-1]==t)
		{
			tt=1;
			break;
		}
		i=v[i-1];
	}
	if(tt==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
