#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool c1=false,c2=false;
	string s,S;
	int T;
	cin>>s>>T;
	while(T--)
	{
		cin>>S;
		if(s==S)
		{
			c1=true,c2=true;
			break;
		}
		if(s[0]==S[1])
		c1=true;
		if(s[1]==S[0])
		c2=true;
	}
	if(c1&&c2)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}