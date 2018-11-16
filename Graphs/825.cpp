# include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1;
	int k,p;
	cin>>k>>p;
	cin>>s;
	while(p--)
	{
		for(int i=0;i<s.size()-1;i++)
		{
		if(s[i]=='B'&&s[i+1]=='G')
		{
			s[i]='G';
			s[i+1]='B';
			i++;
		}	
		}
	}
	for(int i=0;i<s.size();i++)
	cout<<s[i];
}