#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

//

//

int main()
{
	string input;
	cin >> input;

	bool isDangerous = false;

	if (input.length() >= 7)
		for (int i = 0; i <= input.length() - 7; i++)
		{
			for (int j = i + 1; j < i + 7; j++)
			{
				if (input[j] != input[i])
				{
					isDangerous = false;
					break;
				}

				isDangerous = true;
			}

			if (isDangerous)
			{
				cout << "YES";
				return 0;
			}
		}

	cout << "NO";

	return 0;
}