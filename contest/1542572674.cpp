#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string part[101];
	bool A = false;
	bool B = false;
	int n;
	cin >> str;
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		cin >> part[i];
		if (part[i][0] == str[1])
			A = true;
		if (part[i][1] == str[0])
			B = true;
	}
	if (A&&B) cout << "YES";
	else
	{
		for (int i = 0; i < n;i++)
		{
			if (part[i] == str)
			{
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";
		return 0;
	}
}