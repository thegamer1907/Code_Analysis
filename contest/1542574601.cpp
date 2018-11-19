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
int h, m, h1, m1, s1, s, t1, t2;
int main()
{
	iostream::sync_with_stdio(false); cin.tie(0);
#ifdef _MY_DEBUG
	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif
	ggen = mt19937(1337);
	cin >> h1 >> m1 >> s1 >> t1 >> t2;
	h1 %= 12;
	h = h1 * 3600 + m1 * 60 + s1;
	m = m1 * 60 * 12 + s1;
	s = 12 * 60 * s1;
	t1 *= 3600;
	t2 *= 3600;
	if (t1 == h)
		h = 100000;
	if (t1 == m)
		m = 100000;
	if (t1 == s)
		s = 100000;

	if (t2 == h)
		h = 100000;
	if (t2 == m)
		m = 100000;
	if (t2 == s)
		s = 100000;
	int cn = 0;
	for (int i = t1; i != t2; ++i)
	{

		if (i == 12 * 3600)
			i = 0;
		if (i == t2)
			break;
		if (i == h || i == m || i == s)
		{
			++cn;
			break;
		}
	}

	for (int i = t2; i != t1; ++i)
	{

		if (i == 12 * 3600)
			i = 0;
		if (i == t1)
			break;
		if (i == h || i == m || i == s)
		{
			++cn;
			break;
		}

	}

	if (cn == 2)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	return 0;
}