#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	char a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int j=0;j<s;j++)
	{
	for(int i=0;i<n;i++)
	{
		if(a[i+1]=='G'&&a[i]=='B')
		{
			swap(a[i],a[i+1]);
			i++;
			
		}
	}
	}
	for(int i=0;i<n;i++)
	cout<<a[i];
	
	
}