#include<bits/stdc++.h>
using namespace std;
int n,x[200000],h[200000],l=-1e9,c;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i]>>h[i];
	for(int i=0;i<n-1;i++)
	{
		if(l<x[i]-h[i])
		{
			c++;
			l=x[i];
		}
		else if(x[i+1]>x[i]+h[i])
		{
			c++;
			l=x[i]+h[i];
		}
		else
			l=x[i];
	}
	cout<<c+1;
	return 0;
}