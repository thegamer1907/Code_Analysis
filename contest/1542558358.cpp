#include <bits/stdc++.h>
using namespace std;
map<string, bool>mp;
string s,arr[102];
int n;
int main()
{
	ios::sync_with_stdio(0);
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> s >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		mp[arr[i]] = 1;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = i ;j < n;j++)
		{
			string f="", e="";
			f += arr[i][1]; 
			f += arr[j][0];
			e += arr[j][1];
			e += arr[i][0];
			mp[f] = 1, mp[e] = 1;
		}
	}
	if (mp[s])
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}