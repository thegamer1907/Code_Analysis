#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string a;
	while (cin >> a)
	{
		int n;
		cin >> n;
		int mp[300] = { 0 };
		int ret1 = 0;
		int ret2 = 0;
		while (n--)
		{
			string b;
			cin >> b;
			if (b[0] == a[1]) ret1 = 1;
			if (b[1] == a[0]) ret2 = 1;
			if (b[0] == a[0] && b[1] == a[1])
			{
				ret1 = 1; ret2 = 1;
			}
		}
		if (ret1 && ret2)
		{
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}