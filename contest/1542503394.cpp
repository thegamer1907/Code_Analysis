#include <bits/stdc++.h>
#define  pb push_back
#define nl "\n"
#define fastScan ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
string s[12345];
int main()
{
	fastScan;
	string str;cin>>str;
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i]==str)
		{
			cout<<"YES"<<nl;
			return 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			string s1="";
			s1.pb(s[i][1]);
			s1.pb(s[j][0]);
			if(s1==str)
			{
				cout<<"YES"<<nl;
				return 0;
			}
		}
	}
	cout<<"NO"<<nl;
	return 0;	
}
