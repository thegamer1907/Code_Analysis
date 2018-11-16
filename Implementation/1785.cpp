#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	size_t found = s.find("0000000");
	size_t foundzzz = s.find("1111111");
		if(found != string::npos) cout << "YES\n";
		else if(foundzzz != string::npos) cout << "YES\n";
		else cout << "NO\n";
}
