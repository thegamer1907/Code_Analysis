#include<bits/stdc++.h>
using namespace std;
int a[10000];
int fun(int i,int j)
{
	int c1=0,c2=0;
	for(int k=i;k<=j;k++)
	{
		if(a[k]==0)
			c2++;
		else 
		{
			c1++;
		}	
	}
	return (c2-c1);
}
int main() 
{
	int n,c1=0;
	
	cin>>n;
	int maxi=-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			c1++;
	}	
	//cout<<c1<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			maxi=max(maxi,fun(i,j));
			//cout<<maxi<<endl;
		}
	}	
	cout<<maxi+c1;
	return 0;
}