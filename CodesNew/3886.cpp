#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	long long int  sum=0;
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	long long int val=a[n-1]*(n-1);
	sum-=val;
	if(sum>=0)
	{ if(sum%(n-1)==0)
	{cout<<a[n-1]+sum/(n-1);}
	    else
	    {
	        cout<<a[n-1]+sum/(n-1)+1;
	    }
	}
	else
	{
		cout<<a[n-1];
	}
}