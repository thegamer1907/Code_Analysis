//#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int cnt1(int x)
{
	int i = 0;
	while ((1 << i) < x)
		i++;

	return i;
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	//freopen("input.txt", "r", stdin);
	int n, a, b;
	cin >> n >> a >> b;
	a--, b--;

	int l = 0, r = n, cnt = 0;
	bool find = false;

	do {
		int m = (l + r) >> 1;
		if (a < m && b < m || a >= m && b >= m) {
			if (a < m)
				r = m;
			else
				l = m;
		}
		else
			find = true;
		cnt++;
	} while (!find);
	if (r - l == n)
		cout << "Final!";
	else
		cout << cnt1(r - l);
}
