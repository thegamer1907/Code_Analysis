#include<bits/stdc++.h>
using namespace std;
bool f[2];
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	string s, t;
	cin >> s;
	int n;
	cin >> n;
	while (n--) {
		cin >> t;
		if (t == s)
			f[0] = f[1] = 1;
		if (t[0] == s[1])
			f[1] = 1;
		if (t[1] == s[0])
			f[0] = 1;
	}
	cout << ((f[0] && f[1]) ? "YES" : "NO") << '\n';
}
