#include <iostream>
#include <string>

using namespace std;

int a, b, num;
string s[1200], t[1200];

int main()
{
	for (int c = 1; c <= 1200; c++)
	{
		s[c] = "thisisnotavalue";
		t[c] = "thisisnotavalue";
	}
	cin >> a >> b;
	for (int c = 1; c <= a; c++)
		cin >> s[c];
	for (int c = 1; c <= b; c++)
		cin >> t[c];
	if (a == b)
		for (int c = 1; c <= 1200; c++)
			for (int d = 1; d <= 1200; d++)
				if (s[c] == t[d] && (s[c] != "thisisnotavalue"))
					num++;
	if (num % 2 != 0)
		a++;
	if (a > b)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}