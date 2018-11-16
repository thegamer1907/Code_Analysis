#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long  n,m;
 cin>>n>>m;
 long long a[n+1];
 set<int>s;
 long long b[n+1];
 for(int i=1;i<=n;i++)
 {
 	cin>>a[i];
	 }	
	b[n]=1;
	s.insert(a[n]);
	for(int i=n-1;i>=1;i--)
	{
		if(s.find(a[i])!=s.end())
		{
			b[i]=b[i+1];
		
		}
		else
		{
			b[i]=b[i+1]+1;
			s.insert(a[i]);
		}
	}
	for(int i=0;i<m;i++)
	{
		int l;
		cin>>l;
		cout<<b[l]<<endl;
	}
	
}