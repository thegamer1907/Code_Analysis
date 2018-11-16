#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	char c;
	while(t--)
	{
	for(i=0;i<n-1;i++)
	{
		if(s[i]=='B' && s[i+1]=='G')
		{
			s[i]='G';
			s[i+1]='B';
			i++;
		}
	}
	}
	cout<<s;
	return 0;
}
