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
#include <bitset>

using namespace std;

#define pi (3.1415926535897932384626433832795)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define tmin(x,y,z) (min(min((x),(y)),(z)))
#define tmax(x,y,z) (max(max((x),(y)),(z)))
#define sq(x) ((x)*(x))
#define cube(x) (((x)*(x))*(x))
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

typedef long long int64;
typedef long double ld;
typedef unsigned long long uint64;
typedef pair<int, int> pii;
typedef pair<int64, int64> pll;
const int INF = (int)(1e9 + 1e6);
const int64 LINF = (int64)(4e18);
const double EPS = 1e-14;
mt19937 ggen;

void solve();
void solve1();

int main()
{
	iostream::sync_with_stdio(false); cin.tie(0);

#ifdef _MY_DEBUG
	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif
	//freopen("a.in", "rt", stdin); freopen("a.out", "wt", stdout);

	ggen = mt19937(1337);
	solve();
}

int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };

void solve()
{
	vector<int> pr;
	int k = 0;
	for (int i = 1; true; ++i)
	{
		int j = i;
		int su = 0;
		while (j)
		{
			su += j % 10;
			j /= 10;
		}
		if (su == 10)
		{
			pr.pb(i);
			k++;
		}
		if (k > 10000)
			break;
	}
	cin >> k;
	cout << pr[k - 1];
}