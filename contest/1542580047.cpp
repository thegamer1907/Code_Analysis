#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

string t;

inline bool validstr(string s)
{
	if (t[0] != s[0] &&
		t[0] != s[1] &&
		t[1] != s[0] &&
		t[1] != s[1])
		return false;
	return true;
}

int main ()
{
	ios::sync_with_stdio(false);
	cin >> t;

	unsigned short n;
	cin >> n;

	vector<string> v;

	for (unsigned short i = 0u; i < n; ++i)
	{
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	for (unsigned short i = 0u; i < n; ++i)
	{
		if (!validstr(v[i])) continue;

		for (unsigned short j = 0u; j < n; ++j)
		{
			if (!validstr(v[j])) continue;

			string tmp = v[i] + v[j];
			if (tmp.find(t) != string::npos)
			{
				cout << "YES";
				return 0;
			}

			tmp = v[j] + v[i];
			if (tmp.find(t) != string::npos)
			{
				cout << "YES";
				return 0;
			}

		}

	}

	cout << "NO";

	return 0;
}