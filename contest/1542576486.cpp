#include<bits/stdc++.h>
using namespace std;
string p, s; int n, x, f;
int main()
{
	cin >> p >> n;
	for (int i = 0; i < n; i++)	{
		cin >> s;
		if (s == p)return cout << "YES\n", 0;
		if (s[0] == p[1])x++;
		if (s[1] == p[0])f++;
	}
	if (x&&f)cout << "YES\n";
	else cout << "NO\n";
	return 0;
}