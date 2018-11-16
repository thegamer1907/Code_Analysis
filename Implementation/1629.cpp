#include <bits/stdc++.h>

using namespace std;
int main()
{
	string s;
	int d=1;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0'||s[i]=='1')
		{
			if(s[i]==s[i+1]) d++;
			else d=1;
			if(d==7) break;
		}
	}
	if(d==7) cout<<"YES";
	else cout<<"NO";
	
}