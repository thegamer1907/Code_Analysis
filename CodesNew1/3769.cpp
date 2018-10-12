#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m,a[10000];
	cin>>n>>m;
	ll y=m;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);//cout<<"hi";
	ll max=a[n-1];
	for(ll i=0;i<n-1;i++)
	{
		if(m>0)
		{
			m-=(max-a[i]);
		}
	
		else
		{
			m=0; 
			break;
		}
	}
	if(m<0)
	m=0;
	//cout<<m<<endl;
	ll min;
	if(m==0)
	cout<<max<<" "<<max+y;
	else
	{
		min=max+m/n;
		if(m%n!=0)
		min=min+1;
		cout<<min<<" "<<max+y;
	}
	
}
