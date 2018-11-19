#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	bool c1 = 0 ,c2 = 0;
	for(int i = 0 ; i < n ; i++)
	{
		string r;
		cin >> r;
		if(r[0] == s[1]) c1 = 1;
		if(r[1] == s[0]) c2 = 1;
		if(s == r) {c1 = 1;c2 = 1;}
		if(c1 && c2) break;
		
	}
	c1 && c2 ? cout << "YES" : cout << "NO";
}