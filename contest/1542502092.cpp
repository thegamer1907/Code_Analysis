#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	string s , t ,res = "";
	int x;
	cin >> s >> x;
	bool b = false, l1 = false , l2 = false;
	for (int i = 0; i < x; i++)
	{
		cin >> t;
		if (t[0] == s[0] && t[1] == s[1])
			b = true;
		else if (t[0] == s[1])
			l1 = true;
		else if (t[1] == s[0])
			l2 = true;
		if (t[0] == s[1] && t[1] == s[0])
			b = true;
	}
	if(b || (l1&&l2) )
		cout << "YES" << endl;
	else if (x == 1)
	{
		if (t[0] == s[1] && t[1] == s[0])
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;

	}
	else
		cout << "NO" << endl;
	/*
	res += res;
	cout << res << endl;
	for (int i = 0; i < res.size() - 1; i++)
	{
		if (res[i] == s[0] && res[i + 1] == s[1])
		{
			b = false;
			break;
		}
	}
	if (b)
		cout << "NO" << endl;
	*/return 0;
}

