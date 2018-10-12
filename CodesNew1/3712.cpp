#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,m,a[1000],min;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	k=a[n-1]+m;
	for(i=n-1;i>=0;i--)
	{
		if(a[n-1]==a[0])
			break;
		j=a[n-1]-a[i];
		if(j<m)
		{
			m=m-j;
			a[i]=a[n-1];
		}
		else
		{
			a[i]=a[i]+m;
			m=0;
		}
	}
	if(m%n==0)
		a[0]=a[0]+m/n;
	else
		a[0]=a[0]+m/n+1;
	sort(a,a+n);
	cout<<a[n-1]<<" "<<k<<endl;
}
