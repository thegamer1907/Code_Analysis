#include<iostream>
#include<string>

using namespace std;



int main()
{
	string pass;
	int n;
	cin >> pass;
	cin >> n;
	bool lastChar = false;
	bool firstChar = false;

	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		if (input == pass)
		{
		
			cout << "YES";
			return 0;
		}
		else
		{
			if (input[1] == pass[0])
			{
				firstChar = true;
			}
			if (input[0] == pass[1])
			{
				lastChar = true;
			}
		}

	}

	if (firstChar && lastChar)
		cout << "YES";
	else
		cout << "NO";


	return 0;
}