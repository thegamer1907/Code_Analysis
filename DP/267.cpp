
#include <iostream> 
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,a[100],b[100],i,l=0,j,k=0;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	sort(a,a+m);
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort(b,b+n);
	for(i=0;i<m;i++)
	{
		for(j=l;j<n;j++)
		{
			if(a[i]-b[j]<=1&&a[i]-b[j]>=-1)
			{
				k++;
				l=j;
				l++;
				break;
			}
		}
		
	}
	cout<<k;
	return 0;
	
}