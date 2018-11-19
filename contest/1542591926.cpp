#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <math.h>
#include <functional>
#include <unordered_map>
#include <map>

using namespace std;

typedef long long ll;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s;
	cin >> s;
	int n;
	cin >> n;
	vector<string> a(n);
	bool f = false;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		for (int j = 0; j < (int)a[i].length() - 1; j++)
			if (s == a[i].substr(j, 2))
				f = true;
	}
	if (f)
	{
		cout << "YES";
		return 0;
	}
	bool f1 = false, f2 = false;
	for (int i = 0; i < n; i++)
	{
		if (a[i][0] == s[1])
			f2 = true;
		if (a[i][(int)a[i].length() - 1] == s[0])
			f1 = true;
	}
	if (f1 && f2)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}