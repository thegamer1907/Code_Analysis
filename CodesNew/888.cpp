#include <bits/stdc++.h>

using namespace std;

map <string, int> mp;
int main()
{
	int n, m, k =0;
	string s;
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
	{
		cin >> s;
		mp[s] ++;
	}
	for(int i = 1; i <= m; i ++)
	{
		cin >> s;
		if(mp[s])
			k ++;
	}
	if(n > m)
	{
		cout << "YES";
		return 0;
	}
	if(m > n)
	{
		cout << "NO";
		return 0;
	}
	if(k & 1)
		cout << "YES";
	else
		cout << "NO";
}
