#include <bits/stdc++.h>

using namespace std;

int n, k, T;

string s[1000];

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	string pass;

	cin>>pass;

	cin>>n;

	for(int i = 1; i <= n; i++) cin>>s[i];

	bool ok = false;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{

			if(s[i][1] == pass[0] && s[j][0] == pass[1]) ok = true;

			if(s[i] == pass || s[j] == pass) ok = true;
		}
	}

	if(ok) cout<<"YES\n";

	else cout<<"NO\n";
}