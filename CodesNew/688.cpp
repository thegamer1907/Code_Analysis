#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j,k,common=0;
	cin>>n>>m;
	map<string,int> M;
	map<string,int> N;
	string s[n+m],str[m];
	for(i=0;i<m+n;i++)
	{
		cin>>s[i];
		if(M[s[i]]==0)
		{
			M[s[i]]=1;
		}
		else if(M[s[i]]==1)
		{
			common++;
			M[s[i]]=2;
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