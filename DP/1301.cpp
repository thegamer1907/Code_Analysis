#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]) a[i]=-1,count++;
		else a[i]=1;
	}
	if(count==n)
	{
		cout<<n-1;
		return 0;
	}
	int m[n]={0};
	if(a[0]>0)m[0]=a[0];
	for(i=1;i<n;i++)
	{
		if(m[i-1]+a[i]>=0)
		{
			m[i]=m[i-1]+a[i];
		}
		else
		{
			m[i]=0;
		}
	}
	cout<<count+*max_element(m,m+n);
	
}