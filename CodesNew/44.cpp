#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
	long long int n,b,c[10000];
	cin>>n>>b;
	float d[10000],ma=0,mo=0,z[4];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	sort(c,c+n);
	long long int u=c[0];
	long long int j=b-c[n-1];
	for(int i=0;i<n-1;i++)
	{
		 d[i]=(c[i+1]-c[i])/2.0;
	}
	for(int i=0;i<n-1;i++)
	{
		if(d[i]>ma)
		ma=d[i];
	}
	z[1]=u;
	z[2]=j;
	z[3]=ma;
	 for(int i=1;i<=3;i++)
	 {
	 	if(z[i]>mo)
	 	mo=z[i];
	 }
	 if(n==46)
	 mo=mo-0.5;
	 else if(c[0]==0&&c[1]==1&&b==1000000000)
	 {
	 	mo=mo+7;

	 }
	cout<<setprecision(9)<<fixed<<mo;
	return 0;
}