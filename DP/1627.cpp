#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	cin>>s;
	if(s.length()<4) cout<<"NO";
	else
	{
		string p,q;
		string x=s;
		int n=s.length();
		p="AB";
		q="BA";
		int e=0,f=0;
		for(int a=0;a<n-1;a++)
		{
			if(s.substr(a,2)==p)
			{
				e=1;
				s[a]='a';
				s[a+1]='a';
				break;
			}
		}
		for(int a=0;a<n-1;a++)
		{
			if(s.substr(a,2)==q)
			{
				f=1;
				break;
			}
		}
		if(e==1 && f==1)
		{
			cout<<"YES";
		}
		else
		{
			s=x;
			e=0;
			f=0;
			for(int a=0;a<n-1;a++)
			{
				if(s.substr(a,2)==q)
				{
				
					e=1;
					s[a]='a';
					s[a+1]='a';
					break;
				}
			}
			for(int a=0;a<n-1;a++)
			{
				if(s.substr(a,2)==p)
				{
					f=1;
					break;
				}
			}
			if(e==1 && f==1)
			{
				cout<<"YES";
			}
			else
			{
				cout<<"NO";
			}
		}
	}
	return 0;
}
