#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	
	cin>>n>>k;
	
	int a[n],i;
	int item;
	for(i=0;i<n;i++)
	{
	
	cin>>a[i];
	if(k==i+1)
	item=a[i];
}
//	int size=sizeof(a)/sizeof(a[0]);
	
//	sort(a,a+size);
	int c=0;
	for(i=0;i<n;i++)	
	{
		if(a[i]>=item&&a[i]>0)
		c++;
	}
	
	cout<<c<<endl;
	
	return 0;
}
