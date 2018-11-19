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

string b[1000];
string e[1000];
set<string> u[1000][13];

void calc(string s, int ind)
{

	for (int i = 1; i <= 12; i++)
		for (int q = 0; q <= int(s.size()) - i; q++)
		{
			string ss;
			for (int j = q; j < q + i; j++)
				ss += s[j];
			u[ind][i].insert(ss);
		}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
		e[i] = b[i];
		calc(e[i], i);
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a1, a2;
		cin >> a1 >> a2;
		if (b[a1].size() < 30)
			b[n + i + 1] = b[a1] + b[a2];
		else
			b[n + i + 1] = b[a1];

		if (e[a2].size() < 30)
			e[n + i + 1] = e[a1] + e[a2];
		else
			e[n + i + 1] = e[a2];
		for (int j = 1; j <= 12; j++)
		{
			u[n + i + 1][j] = u[a1][j];
			u[n + i + 1][j].insert(u[a2][j].begin(), u[a2][j].end());
		}

		calc(e[a1] + b[a2], n + i + 1);

		int sz = 2, best = 0;
		for (int j = 1; j <= 12; j++)
		{
			if (u[n + i + 1][j].size() == sz)
				best = j;
			sz *= 2;
		}

		cout << best << endl;
	}
}