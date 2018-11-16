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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ui m, n, count = 0;
	vector<ui>a, b;
	cin >> n;
	a.resize(n);
	for (ui i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	b.resize(m);
	for (ui i = 0; i < m; i++) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (ui i = 0; i < a.size(); i++)
	{
		for (ui j = 0; j < b.size(); j++)
			if (a[i] <= b[j] + 1 && a[i] >= b[j] - 1)
			{
				count++;
				b.erase(b.begin(), b.begin() + j + 1);
				break;
			}
	}
	cout << count;
	return 0;
}