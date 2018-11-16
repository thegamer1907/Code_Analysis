#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,m;
	cin>>n>>m;
	long int a[n+1];
	long int count[100001],distinct[n+1];
	for(long int i=1;i<=n;i++)
		cin>>a[i];
	for(long int i=0;i<=100000;i++)
		count[i]=0;
	distinct[n]=1;
	count[a[n]]++;
	for(long int i=n-1;i>=1;i--)
	{
		if(count[a[i]]==0)
		{
			distinct[i]=distinct[i+1]+1;
			count[a[i]]=1;
		}
		else
			distinct[i]=distinct[i+1];
	}
	long int temp;
	for(long int i=0;i<m;i++)
	{
		cin>>temp;
		cout<<distinct[temp]<<endl;
	}
	
    
    return 0;
}