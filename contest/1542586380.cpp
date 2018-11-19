#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
using namespace std;

bool l1, l2, r1, r2;
int n;
string s, p[200];

int main()
{
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> p[i];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			string r = p[i] + p[j];
			if (r.find(s) != -1)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
