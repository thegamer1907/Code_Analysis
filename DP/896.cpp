#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l=0,k=0,s=0,i,a;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(a==1) 
		{
			l++;
			if(s>0) 
			s--;
		}
		else
		s++; 
		if(s>k) k=s;
	}
	if(k==0) 
	{
		cout<<l-1;
		return 0;
	}
	cout<<l+k;
}