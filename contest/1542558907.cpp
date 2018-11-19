#include<bits/stdc++.h>
using namespace std;
bool ans;
main()
{
	string s;
	int i,j,n;
	cin>>s>>n;
	string x[n];
	for(i=0;i<n;++i)
	{
		cin>>x[i];
		if(x[i]==s)return cout<<"YES",0;
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			string q="";
			q+=x[i];q+=x[j];
			if(q.find(s)!=string::npos)return cout<<"YES",0;
		}
	}
	cout<<"NO"; 
}