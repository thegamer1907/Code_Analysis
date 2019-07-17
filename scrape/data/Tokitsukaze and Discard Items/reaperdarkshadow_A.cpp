#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,l;
	
	int m,i,j,ns=0,te=0;
	
	cin>>n>>m>>k;
	
	long long int b[m];
	
	j=m;
	l=k;
	for (i=0;i<m;i++)
	cin>>b[i];
	
	i=0;
	
	while (i<m)
	{
		ns++;
		te=0;
		
	//	cout<<l<<endl;
		for (i=i;i<m;i++)
		{
			if (b[i]>l)
			break;
			else
			{
			te++;
		    }
		}
		//cout<<te<<endl;
		if (te==0)
		{
			//l=l+k;
			l=max(l+k,l+((b[i]-l)/k)*k);
			ns--;
		}
		else
		l=l+te;
	}
	
	cout<<ns;
	
}