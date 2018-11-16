#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int m,j;
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(b,b+m);
	for(i=0;i<n;i++)
       {
       		for(j=0;j<m;j++)
       		{
       				if(abs(a[i]-b[j])<=1)
       				{
       					count++;
       					b[j]=10000;
       					break;
				}
			 }
	 }
	 cout<<count<<endl;
	 return 0;
}