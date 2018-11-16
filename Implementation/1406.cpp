#include<bits/stdc++.h>
using namespace std;
int n,t;
string s;
char l;
int main()
{
	cin>>n>>t>>s;
	for(int i=0;i<t;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(s[j-1]=='B'&&s[j]=='G')
			{
				s[j-1]='G';
				s[j]='B';
				j++;
			}
		}
	}
	cout<<s;
	return 0;
}