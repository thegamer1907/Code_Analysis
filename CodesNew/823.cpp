#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,m;
	cin>>n>>m;
	set<string> s1,s2;
	for(i=0;i<n;i++)
	{
		string s;
		cin>>s;
		s1.insert(s);
	}
	for(i=0;i<m;i++)
	{
		string s;
		cin>>s;
		s2.insert(s);
	}
	int common=0;
	set<string> :: iterator it;
	for(it=s1.begin();it!=s1.end();it++)
	{
		if(s2.find(*it)!=s2.end())
		{
			common++;
		}
	}
	if(s1.size()==s2.size() && common%2==0)		cout<<"NO\n";
	else if(s1.size()==s2.size() && common%2==1)						cout<<"YES\n";
	else if(s1.size()>s2.size())		cout<<"YES\n";
	else				cout<<"NO\n";
}
