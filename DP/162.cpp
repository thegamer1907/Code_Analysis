#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	cin>>b[i];
	
	sort(a,a+n);
	sort(b,b+m);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]-b[j]==1 || a[i]-b[j]==-1 || a[i]-b[j]==0)
			{
				a[i]=300;
			b[j]=200;
			count++;
		}
		}
	}
	cout<<count;
}