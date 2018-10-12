#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll int n,i,min1,x2,x3,ans;
	cin>>n;
	vector<ll int> v(n);
	for(i=0;i<n;i++)
	cin>>v[i];
	min1=*min_element(v.begin(),v.end());
	for(i=0;i<n;i++)
	{
		v[i]-=min1;
		if(v[i]<0)
		v[i]=0;
	}
	x2=min1%n;
	x3=1;
	
	while(1)
	{
		x2=x2%n;
		if(v[x2]<x3)
		{
			ans=x2+1;
			break;
		}
		x2++,x3++;
	}
	cout<<ans<<endl;
}

























