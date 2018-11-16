#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	
	cin>>n>>k;
	
	int a[n],i;
	int item=-1,c=0;
	for(i=0;i<n;i++)
	{
	
	cin>>a[i];
	
	if(i+1<=k&&a[i]>0)
	{
	c++;
	item=a[i];
	}

	else 
	{
	if(item==a[i]&&a[i]>0)
	c++;	
	}


}



	
	cout<<c<<endl;
	
	return 0;
}
