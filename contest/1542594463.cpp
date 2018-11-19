#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <functional>
#include <set>
#include <queue>
#include <string>
#include <map>
#include <sstream>

using namespace std;

string arr[1001];

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	string ss;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			ss = arr[i] + arr[j];
			if (ss.find(s) != -1)
			{
				cout << "YES";
				return 0;
			}
		}

	cout << "NO";
}