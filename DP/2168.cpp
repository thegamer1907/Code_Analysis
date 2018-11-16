#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,k,i,j;
	cin>>n>>m;
	set<long long>s;
	long long a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=n-1;i>=0;i--)
	s.insert(a[i]),a[i]=s.size();
	for(i=0;i<m;i++)
	{
		cin>>j;
		cout<<a[j-1]<<endl;
	}
}