#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	string p, s;
	int n;
	cin >> p;
	cin >> n;
	int bn = 0, en = 0;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == p)
			bn = en = 1;
		if (s[1] == p[0])
			bn = 1;
		if (s[0] == p[1])
			en = 1;
	}
	if (bn && en)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
