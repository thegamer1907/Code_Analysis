#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,t;
	cin>>n>>t;
	
	int a[n],i;
	for(i=1;i<n;i++)
	cin>>a[i];
	
	i=1;
	while(i<t)
	{
		i=i+a[i];
		
	}
	
	
	if(i==t)
	cout<<"YES";
	else
	cout<<"NO";

}
