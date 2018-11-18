#include<bits/stdc++.h>
using namespace std;
int n;
string s;
string g[105];
int main()
{
	cin>>s>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>g[i];
		if(g[i]==s || (g[i][0]==s[1] && g[i][1]==s[0]))
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j) continue;
			if(g[i][1]==s[0] and g[j][0]==s[1])
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}