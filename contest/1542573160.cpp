#include<iostream>

using namespace std;

int main()
{
	char pw[3];
	bool p, s, e;
	p = s = e = false;

	cin >> pw;
	cin.get();

	int n_word;
	cin >> n_word;

	char word[3];
	while (n_word--)
	{
		cin >> word;
		if (word[0] == pw[0] && word[1] == pw[1])
		{
			e = true;
		}
		else
		{
			if (word[1] == pw[0])
			{
				s = true;
			}

			if (word[0] == pw[1])
			{
				p = true;
			}
		}
	}

	cout << ((e || (p && s)) ? "YES" : "NO");

	return 0;
}