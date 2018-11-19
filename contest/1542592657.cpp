#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int n;
	cin >> n;
	bool flag = 0, flag2 = 0;
	for (int i = 0; i < n; i++)
	{
		string t;
		cin >> t;
		if (s == t)
		{
			cout << "YES";
			return 0;
		}
		if (t[0] == s[1])
			flag2 = 1;
		if (t[1] == s[0])
			flag = 1;
	}
	if (flag && flag2)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
