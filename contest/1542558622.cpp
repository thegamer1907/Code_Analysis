#include <bits/stdc++.h>

using namespace std;

int main()
{
	char s[2];

	cin >> s;

	set<char> pre;
	set<char> suf;

	int n;
	cin >> n;


	bool ok = false;
	for (int i = 0; i < n; i++) {

		char a, b;

		cin >> a >> b;

		if (a == s[0] and b == s[1]) ok = true;

		pre.insert(a);
		suf.insert(b);
	}

	if (pre.find(s[1]) != pre.end() and suf.find(s[0]) != suf.end()) ok = true;

	if (ok) cout << "YES\n";
	else cout << "NO\n";

	return 0; 
}