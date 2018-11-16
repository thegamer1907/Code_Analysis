#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;
int main()
{
	string s;
	bool a = false;
	cin >> s;
	int c = 0;
	for (int i = 0; i<s.size(); i++)
	{
		c = 0;
		for (int j = i; j<s.size(); j++)
		{
			if (s[i] == s[j])
				c++;
			else break;
		}
		if (c >= 7)
		{
			cout << "YES";
			a = true;
			break;

		}
	}
	if (a == false)
		cout << "NO";


	return 0;
}