#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,s1=0,s2=0,a[101],b[101],c[101],i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	for(i=0;i<n;i++)
	s=s+a[i];
	for(i=0;i<n;i++)
	s1=s1+b[i];
	for(i=0;i<n;i++)
	s2=s2+c[i];
	if(s==0 && s1==0 && s2==0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
	
}
