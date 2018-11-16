#include<bits/stdc++.h>
using namespace std;
int n,b[200],mx;
int a[200],c;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>0&&a[i]==1)
		{
			c++;
			b[i]=b[i-1]-1;
		}
		else if(i>0)
			b[i]=b[i-1]+1;
		else if(a[i]==1)
		{
			c++;
			b[i]=-1;
		}
		else
			b[i]=1;
	}
	mx=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			mx=max(mx,b[j]-b[i]);
		}
	}
	cout<<mx+c;
	return 0;
}