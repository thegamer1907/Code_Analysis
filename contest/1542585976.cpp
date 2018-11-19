#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	string pw;
	cin>>pw;
	cin>>n;
	string s[n];
	for(int i = 0; i < n; i++)
	{
		cin>>s[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if((s[i][0] == pw[1] && s[j][1] == pw[0]) || (s[i][0] == pw[0] && s[j][1] == pw[1]) || ((s[i][0] == pw[0] && s[i][1] == pw[1]) || (s[j][0] == pw[0] && s[j][1] == pw[1])))
			{
				string as = s[i] + s[j];
				string ds = s[j] + s[i];
				for(int u = 0; u < 4; u++)
				{
					if((as[u] == pw[0] && as[u + 1] == pw[1] || (ds[u] == pw[0] && ds[u + 1] == pw[1])))
					{
						cout<<"YES";
						return 0;
					}
				}
				
			}
			ans++;
		}
	}
	cout<<"NO";
	return 0;
}
