#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,b,c,d,e,f,g,sum=0;
	cin>>n;
	cin>>m;
	int a[n];
	for (int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	b=m+a[n-1];
	for(int i=0;i<n;i++)
	{sum+=a[i];}

	c=n*a[n-1]-sum;
	if (c>m)
	{cout<<a[n-1]<<" ";}
	else
	{g=m-c;
	e=g/n;
	f=g%n==0?0:1;
	cout<<a[n-1]+e+f<<" ";
	}
	cout<<b<<endl;
return 0;
}
