// anis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
# include<string>
using namespace std;
int main()
{
	string anis;
	getline(cin, anis);
	int v = anis.size();
	//cout << v;
	int g = 0, gg=0;
	if (v < 7)
	{
		cout << "NO";
	}
	else
	{
		for (int i = 0;i < v;i++)

		{
			if (gg == 1)
				break;
			int y = 0, n = 0;
			if (anis[i] == '0')
			{
				for (int j = i;j <= i + 6 && j < v;j++)
				{
					if (anis[j] == '0')
					{
						y++;
						if (y == 7)
						{
							g++;
							gg++;
							cout << "YES";
							break;
						}
					}
				}
			}
			else if (anis[i] == '1')
			{
				for (int j = i;j <= i + 6 && j < v;j++)
				{
					if (anis[j] == '1')
					{
						n++;
						if (n == 7)
						{
							g++;
							gg++;
							cout <<"YES";
							break;
						}
					}
				}
			}
		}
		if (g == 0)
		{
			printf("NO");
		}

	}
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
