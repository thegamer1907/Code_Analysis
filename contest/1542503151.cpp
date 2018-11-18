#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	string s ,s2;
	bool x = false;
	cin >> s;
	int n;
	cin >> n;
	string s1[100];
	for (int i = 0; i < n; i++)
	{
		cin >> s1[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			s2 = s1[i] + s1[j];
			int m = s2.find(s);
			if (m >= 0)
				x = true;

		}

	}
	if (x == true)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}