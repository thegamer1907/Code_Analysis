//#include "stdafx.h" 
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int mas[100],a=1,mx=0;
	string s;
	getline(cin, s);
	for (size_t i = 0; i < s.size(); i++)
	{
		mas[i] = s[i]-'0';
	}
	for (size_t i = 0; i < s.size()-1; i++)
	{
		if (mas[i] == mas[i + 1])
			a++;
		else
			a = 1;
		if (a > mx)
			mx = a;
	}
	if (mx >= 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}