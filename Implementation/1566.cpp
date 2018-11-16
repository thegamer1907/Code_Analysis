#include <iostream>
using namespace std;

int main()
{
	char str[101];
	cin >> str;
	int k = 1;
	bool f = false;
	for (int i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == str[i - 1])
			k++;
		else
			k = 1;
		if (k == 7)
		{
			f = true;
			break;
		}
	}
	if (f)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}