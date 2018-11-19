#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string s,t;

int main()
{
	int n;
	while (cin >> s >> n) 
	{
		bool flag = false;
		bool first = false, second = false;
		for (int i=0;i<n;i++) {
			cin >> t;
			if (s == t) flag  = true;
			if (s[0] == t[1]) {
				first = true;
			}
			if (s[1] == t[0]) {
				second = true;
			}
		}
		if (flag || first && second) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}