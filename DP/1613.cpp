#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
 
using namespace std;
 
#define int long long
#define f first
#define s second

main()
{
	string str;
	cin >> str;
	int n = str.length();
	vector <int> a;
	vector <int> b;
	for (int i = 0; i < n - 1; i++)
	{
		if (str[i] == 'A' && str[i + 1] == 'B')
			a.push_back(i);
		if (str[i] == 'B' && str[i + 1] == 'A')
			b.push_back(i);
	}
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			if (b[j] != a[i] - 1 && b[j] != a[i] + 1)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}   