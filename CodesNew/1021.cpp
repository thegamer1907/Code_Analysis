#include <bits/stdc++.h>
using namespace std;
long long n,m,an;
string s1[2017],s2[2017];
set<string>s;
main ()
{
	cin>>n>>m;
	
	for (int i=1; i<=n; i++)
	{
		cin>>s1[i];	
		
		s.insert(s1[i]);
	}	
	
	for (int i=1; i<=m; i++)
	{
		cin>>s2[i];
		
		int x=s.size();
		s.insert(s2[i]);
		
		if (x==s.size()) an++;
	}
	
	int a=n-an;
	int b=m-an;
	int c=an;
	
	if (c%2==0)
	{
		 if (a>b) cout<<"YES"<<endl;
			  	else cout<<"NO"<<endl;
	}
		else
	if (c%2==1)
	{
	   if (a+1>b) cout<<"YES"<<endl;
			     else cout<<"NO"<<endl;
	}
}