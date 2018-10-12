#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
#include <cstring>
#include <map>
#include <numeric>
#include <cmath>
#include <climits>

typedef long long ll;
#define sf(x) scanf("%d", &x)
#define pf(x) printf("%d\n", x)
#define tmax(a, b, c) max(a, max(b, c))
const ll MOD = 1000000007;

using namespace std;

const int N = 10e5 + 10;

std::set<string> one, two;

int main()
{
	int n, m;
	cin >> n >> m;

	string s;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		one.insert(s);
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> s;
		two.insert(s);
	}

	// for (auto& s: two)
	// {
	// 	cout << s << " ";
	// }
	// cout << endl;

	std::vector<string> v;
	set_intersection(one.begin(), one.end(), two.begin(), two.end(), back_inserter(v));

	if (n - v.size() > m - v.size())
	{
		cout << "YES";
	}
	else if (n - v.size() < m - v.size())
	{
		// cout << n << " " << m << ' ' << v.size() << endl;
		cout << "NO";
	}
	else
	{
		if (v.size() % 2 == 0)
			cout << "NO";
		else
			cout << "YES";
	}

	return 0;
}