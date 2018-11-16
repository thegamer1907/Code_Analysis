// codeforces1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

string s;
int n, a;

int main()
{	
	cin >> n >> a;
	cin >> s;
	for (int j = 0; j < a; j++)
	{
		for (int i = n; i > 0; i--)
		{
			if (s[i] == 'G' && s[i-1] == 'B')
			{
				char h = s[i];
				s[i] = s[i - 1];
				s[i - 1] = h;
				i--;
			}
		}
	}
	
	cout << s;
	//system("pause");
}
