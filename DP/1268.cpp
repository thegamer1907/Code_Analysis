#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int ze=0,one=0;
	int tem=0,tem1=0,c=0,tem2;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			ze++;
		}		
		else
		{
			one++;
		}
	}
	if(one==n)
	{
	    if(n==1)
	    cout<<0<<endl;
	    else
	    cout<<n-1<<endl;
	}
	else
	{
	int c1=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			c++;
		}
		else
		{
			c1++;
		}
		if(c<=c1)
		{
			c=0;
			c1=0;
		}
	//	cout<<c<<" "<<c1<<endl;
		tem=max(tem,one-c1+c);
	}
	//cout<<c1<<endl;
	cout<<tem<<endl;}
}