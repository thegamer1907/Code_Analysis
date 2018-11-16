#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
using namespace std;

int main()
{
	string s; cin >> s;
	vector<int> i1, i2;
	for (int i = 0; i < s.length()-1; i++)
	{
		if (s[i] == 'A' && s[i + 1] == 'B')
			i1.push_back(i);
		else if (s[i] == 'B' && s[i + 1] == 'A')
			i2.push_back(i);
	}
	for (int i = 0; i < i1.size(); i++)
	{
		for (int j = 0; j < i2.size(); j++)
		{
			if (abs(i1[i] - i2[j]) > 1)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}