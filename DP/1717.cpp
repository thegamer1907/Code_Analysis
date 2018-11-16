#include<bits/stdc++.h>
using namespace std;
int q1,q2,p;
bool f1,f2;
string s;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(p==0)
		{
			if(s[i]=='A'&&!f1)
				p=1;
			else if(s[i]=='B'&&!f2)
				p=2;
		}
		else if(p==1)
		{
			if(s[i]=='B')
			{
				f1=1;
				p=0;
			}
			else if(s[i]!='A')
				p=0;
		}
		else if(p==2)
		{
			if(s[i]=='A')
			{
				f2=1;
				p=0;
			}
			else if(s[i]!='B')
				p=0;
		}
	}
	if(f1&&f2)
		cout<<"YES";
	else
	{
		f1=0;
		f2=0;
		p=0;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(p==0)
			{
				if(s[i]=='B'&&!f2)
					p=2;
				else if(s[i]=='A'&&!f1)
					p=1;
			}
			else if(p==1)
			{
				if(s[i]=='B')
				{
					f1=1;
					p=0;
				}
				else if(s[i]!='A')
					p=0;
			}
			else if(p==2)
			{
				if(s[i]=='A')
				{
					f2=1;
					p=0;
				}
				else if(s[i]!='B')
					p=0;
			}
		}
		if(f1&&f2)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}