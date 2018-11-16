#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int b[n+1],c[n+1];
	a[0]=b[0]=c[0]=0;
	if(a[1]==0)
	{
		b[1]=1;
		c[1]=0;
	}
	else
	{
		b[1]=0;
		c[1]=1;
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]==1)
		{
			b[i]=b[i-1];
			c[i]=c[i-1]+1;
		}
		else
		{
			b[i]=b[i-1]+1;
			c[i]=c[i-1];
		}
	}
	int cur=0;
	int max=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			cur=c[i-1]+b[j]-b[i-1]+c[n]-c[j];
			if(cur>max)
				max=cur;
		}
	}
	cout<<max<<endl;
	

	return 0;
}