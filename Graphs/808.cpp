#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < s.size() - 1; j++)
		{
			if (s[j] < s[j + 1])
			{
				swap(s[j], s[j + 1]);
				j++;
			}
		}
	}
	cout << s;
	return 0;
}