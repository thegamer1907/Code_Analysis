#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{
		string tmp =s;
		for(int i=0;i<n-1;i++)
		{
			if(tmp[i]=='B' &&  tmp[i+1]=='G')
			{
				s[i]='G';
				s[i+1]='B';
			}
		}
	}
	cout<<s<<"\n";
}

