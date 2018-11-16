#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,a[1000001],i,p;
	set<long long>s;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=n-1;i>=0;i--)
	{
		s.insert(a[i]);
		a[i]=s.size();
	}
	for(i=0;i<m;i++)
	{
		cin>>p;
		cout<<a[p-1]<<endl;
	}
	return 0;
	
}
