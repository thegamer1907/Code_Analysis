#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	
	for(int i=1; i<=t; i++)
	{	
		int f=0; int l=0; 
		while(f<=s.size())
		{
			if(l+1<s.size()&&s.at(l)=='B' && s.at(l+1)=='G')
			{
				s.at(l)='G';
				s.at(l+1)='B';
				l=l+2;
			}
			else l++;
			f++;
		}
	}
	cout<<s;
}