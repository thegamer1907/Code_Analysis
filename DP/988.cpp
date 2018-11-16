#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <ctime>

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned int ui;

using namespace std;

int flipping(vector<ui>a,ui m,ui n)
{
	int cnt = 0;
	for (ui i = m; i <= n; i++)
	{
		if (a[i]) cnt--;
		else cnt++;
	}
	return cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<ui>a;
	int n, cnt = 0, max = 0;
	cin >> n;
	for (ui i = 0; i < n; i++)
	{
		ui inp; cin >> inp;
		a.push_back(inp);
		if (inp) cnt++;
	}
	for (ui i = 0; i < n; i++)
	{
		for (ui j = i; j < n; j++)
		{
			int var = flipping(a, i, j);
			if (cnt + var > max) max = cnt + var;
		}
	}
	cout << max;
	return 0;
}