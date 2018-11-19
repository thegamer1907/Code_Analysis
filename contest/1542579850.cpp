#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s, s1;
int n;
bool a[256], b[256];
int main()
{
	cin >> s;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> s1;
		if(s[0] == s1[0] && s[1] == s1[1]) cout << "YES", exit(0);
		a[s1[0]] = true;
		b[s1[1]] = true;
	}
	if(a[s[1]] && b[s[0]]) cout << "YES";
	else cout << "NO";
	exit(0);
}