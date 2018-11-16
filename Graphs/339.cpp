#include<iostream>
using namespace std;
int main()
{
	int x;
	int t;
	cin>>x>>t;
	string s;
	cin>>s;
	while(t--)
	{
		for(int i=1;i<x;i++)
		{
			if(s[i-1]=='B' and s[i]=='G')
			{
				s[i-1]='G';
				s[i]='B';
				i++;
			}
		}
	}
	cout<<s;
}