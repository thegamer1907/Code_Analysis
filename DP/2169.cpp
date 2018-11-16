#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k;
	cin>>n>>k;
	long long a[n],d[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	map<long long,long long>m;
	m[a[n-1]]=1;
	d[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		if(m.find(a[i])!=m.end())
		{
			d[i]=d[i+1];
		}
		else
		{
			d[i]=d[i+1]+1;
			m[a[i]]=1;
		}
	}
	for(i=0;i<k;i++)
	{
		cin>>j;
		cout<<d[j-1]<<endl;
	}
}