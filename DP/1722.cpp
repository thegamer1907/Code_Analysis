#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	if (s.size() < 4)
		cout << "NO";
	else
	{
		int posAB1 = -2, posBA1 = -2, posAB2 = -2, posBA2 = -2;
		for (int i = 0; i < s.size() - 1; ++i)
			if (s[i] == 'A' && s[i + 1] == 'B')
			{
				posAB1 = i;
				break;
			}
		for (int i = s.size() - 2; i >= 0; --i)
			if (s[i] == 'B' && s[i + 1] == 'A')
			{
				posBA1 = i;
				break;
			}
		for (int i = 0; i < s.size() - 1; ++i)
			if (s[i] == 'B' && s[i + 1] == 'A')
			{
				posBA2 = i;
				break;
			}
		for (int i = s.size() - 2; i >= 0; --i)
			if (s[i] == 'A' && s[i + 1] == 'B')
			{
				posAB2 = i;
				break;
			}
		if (abs(posAB1 - posBA1) > 1 && posAB1 >= 0 && posBA1 >= 0 || abs(posAB2 - posBA2) > 1 && posAB2 >= 0 && posBA2 >= 0)
			cout << "YES";
		else
			cout << "NO";
	}
}