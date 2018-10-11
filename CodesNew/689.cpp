#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j,k,common=0;
	cin>>n>>m;
	map<string,int> M;
	map<string,int> N;
	string s[n+m],str[m];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		M[s[i]]=1;
	}
	j=n;
	for(i=0;i<m;i++)
	{
		cin>>s[i+j];
		N[s[i+j]]=1;
	}
	for(i=0;i<m+n;i++)
	{
		if(M[s[i]]==1 && N[s[i]]==1)
		{
			common++;
			M[s[i]]=0;
			N[s[i]]=0;
		}
	}
	n-=common;
	m-=common;
	if(common%2==0)
	{
		if(n>m)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
	else
	{
		if(n>=m)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
	cout<<endl;
	return 0;
}