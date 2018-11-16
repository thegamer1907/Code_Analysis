#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int i;
	int flag=0;
	if(s.size()>=7)
	{
	
	for(i=0;i<=s.size()-7;i++)
	{
		if((s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0') || (s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1'))
		{
			flag=1;
			break;
		}
	}
}
	if(flag==1)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}