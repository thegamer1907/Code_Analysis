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
string s, s1[1010];
int n;
int main()
{
	iostream::sync_with_stdio(false); cin.tie(0);
#ifdef _MY_DEBUG
	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif
	ggen = mt19937(1337);
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> s1[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (s1[i] == s)
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			char a = s1[i][0];
			char b = s1[j][1];
			string s3 = "";
			s3 += b;
			s3 += a;

			a = s1[j][0];
			b = s1[i][1];
			string s4 = "";
			s4 += b;
			s4 += a;

			if (s4 == s || s3 == s)
			{
				cout << "YES";
				return 0;
			}
		}
	}

	cout << "NO";
	return 0;
}