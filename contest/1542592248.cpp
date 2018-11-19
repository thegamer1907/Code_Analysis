#include <bits/stdc++.h>
using namespace std;
string s, a[105];
int n;
bool check()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][1] == s[0] && a[j][0] == s[1]) return true;
		}
	}
	return false;
}
int main()
{
	//freopen("c:\\users\\wangyiming\\desktop\\in.txt", "r", stdin);
	while (cin >> s >> n)
	{
		bool flg = false;
		for (int i = 0; i < n; i++) 
		{
			cin >> a[i];
			if (a[i] == s) flg = true;
		}
		if (flg) cout << "YES" << endl;
		else if (check()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}