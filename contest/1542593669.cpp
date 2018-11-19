#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	string a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==s)
			flag=1;
	}
	if(flag)
	{
		cout<<"YES\n";
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(a[i][1]==s[0] && a[j][0]==s[1])
				flag=1;
		}
	}
	if(flag)
	{
		cout<<"YES\n";
		return 0;
	}
	cout<<"NO\n";
	return 0;
}