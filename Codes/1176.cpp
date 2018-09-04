#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,ans,sum,k;

string s,s1;

map <string,long long> ma;

int main()
{
	
	cin>>n>>m;
	
	for(i=1;i<=n;i++)
	{
		cin>>s;
		ma[s]=99;
	}
	
		for(i=1;i<=m;i++)
	{
		cin>>s1;
	if(ma[s1]==99)k++;
	}

	if(k%2==1)
	{
		n++;
	}
	
	if(n>m){
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
	
	
	
	return 0;
}