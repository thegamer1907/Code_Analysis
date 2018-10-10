#include<bits/stdc++.h>
using namespace std;

long long i,j,ans,sum,n,k,a[400009],pas[400009];

map <long long,long long> ma,fix;

int main()
{

	
	cin>>n>>k;
	

	
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(i=n;i>=1;i--)
	{
		
		ans+=ma[a[i]];
		if(a[i]%k==0 )
		{
			ma[a[i]/k]+=fix[k*a[i]];
		}
		fix[a[i]]++;
	}
	
	
	cout<<ans<<endl;
	
	
	return 0;
}