#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{
		for(int i=0;i<n;i++)
		{
			if(i!=0)
			{
				if(s[i]=='G'&&s[i-1]=='B')
				{
					s[i-1]='G';
					s[i]='B';
					i++;
				}
			}
		}
	}
	cout<<s;
	return 0;
}