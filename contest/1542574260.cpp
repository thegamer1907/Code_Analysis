#pragma comment(linker, "/STACK:256000000")
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <memory.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>
#include <random>

using namespace std;
#define mp make_pair
typedef long long ll;
typedef long double ldb;
typedef pair <ldb, ldb> pldbldb;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<int, int> pii;
typedef pair<int64, int64> pll;
const int INF = (int)(1e9 + 1e6);
const int64 LINF = (int64)(4e18);
const double EPS = 1e-9;
mt19937 ggen;
int n, m;
set<int> tsk;

int main()
{
	iostream::sync_with_stdio(false); cin.tie(0);
#ifdef _MY_DEBUG
	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif
	ggen = mt19937(1337);
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		int cn = 0;
		int a;
		for (int j = 0; j < m; ++j)
		{
			cin >> a;
			cn += a * (1 << j);
		}

		tsk.insert(cn);
	}
	int aa = (*tsk.begin());
	if (aa == 0)
	{
		cout << "YES";
		return 0;
	}
	for (auto it = tsk.begin(); it != tsk.end(); ++it)
	{
		for (auto it1 = it; it1 != tsk.end(); ++it1)
		{
			if (*it == *it1)
				continue;
			int a = (*it), b = (*it1);
			if ((a & b) == 0)
			{
				cout << "YES";
				return 0;
			}

		}
	}

	cout << "NO";
	return 0;
}