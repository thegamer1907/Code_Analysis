#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
int n,t;
cin>>n>>t;
string s;
cin>>s;
char x[n];
for(int i=0;i<n;i++)
{
	x[i]=s.at(i);
}
for(int j=1;j<=t;j++)
{
	for(int k=0;k<n-1;k++)
	{
		if(x[k]=='B'&&x[k+1]=='G')
		{
			char temp=x[k];
			x[k]=x[k+1];
			x[k+1]=temp;
			k++;
		}
	}
}
for(int z=0;z<n;z++)
{
	cout<<x[z];
}
}