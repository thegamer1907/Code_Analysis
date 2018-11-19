#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <map>
#include <cstdio>
#include <numeric>
#include <cstdlib>
#include <cassert>
#include <set>
#include <ctime>
#include <stack>
#include <cstring>
#include<functional>
#include <sstream>
#include <ctype.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#pragma comment(linker, "/STACK:16777216")
template<typename T> T fac(T a) { return a ? a*fac(a - 1) : 1; }
template<typename T> T power(T a, int p) { return !p ? 1 : (p & 1 ? a*power(a, p - 1) : power(a*a, p >> 1)); }
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a%b) : a; }
template<typename T> T lcm(T a, T b) { return b / gcd(a, b) * a; }
template<typename T> T next() { T _; cin >> _; return _; }
template<> int next<int>() { int _; scanf("%d", &_); return _; }
template<> double next<double>() { double _; scanf("%lf", &_); return _; }
template<> ll next<ll>() { ll _; scanf("%lld", &_); return _; }
template<typename E> vector<E> next(int n) { vector<E> res(n); for (int i = 0; i < n; i++) res[i] = next<E>(); return res; }
template<class C, class E> int count(const C &c, const E &e) { return count(c.begin(), c.end(), e); }
template<class E> bool has(const vector<E> &c, const E &e) { return find(c.begin(), c.end(), e) != c.end(); }
template<class E> int find(const vector<E> &c, const E &e) { return find(c.begin(), c.end(), e) - c.begin(); }
template<class E> bool binary_has(const vector<E> &c, const E &e) { return binary_search(c.begin(), c.end(), e); }
template<class E> int binary_find(const vector<E> &c, const E &e) { return lower_bound(c.begin(), c.end(), e) - c.begin(); }
template<typename T> T dist2(T i1, T j1, T i2, T j2) { return (i1 - i2)*(i1 - i2) + (j1 - j2)*(j1 - j2); }
bool ok(int i, int j, int n, int m) { return 0 <= i&&i<n && 0 <= j&&j<m; }
const double EPS = 1e-9;
const double PI = acos(-1);
bool LE(double a, double b) { return b - a > -EPS; }
bool BE(double a, double b) { return a - b > -EPS; }
bool EQ(double a, double b) { return fabs(a - b) < EPS; }
bool LESS(double a, double b) { return b - a > EPS; }
bool BIGG(double a, double b) { return a - b > EPS; }
template <int N, typename T> class lug { public: T at[N]; };

int main()
{
	int h = next<int>();
	int m = next<int>();
	int s = next<int>();

	double hh = h%12 + (m * 60 + s) / 3600.0;
	double mm = (m + s / 60.0) / 5.0;
	double ss = s / 5.0;

	int t1 = next<int>();
	int t2 = next<int>();

	bool res = false;
	for (int i = 0; i < 12; i++)
	{
		int cur = (t1 + i + 120) % 12;
		int nxt = cur + 1;

		if (cur <= hh && hh <= nxt || cur <= mm && mm <= nxt || cur <= ss && ss <= nxt)
			break;

		if (cur % 12 == t2 % 12)
			res = true;
		if (nxt % 12 == t2 % 12)
			res = true;
	}

	for (int i = 1; i <= 12; i++)
	{
		int cur = (t1 - i + 120) % 12;
		int nxt = cur + 1;

		if (cur <= hh && hh <= nxt || cur <= mm && mm <= nxt || cur <= ss && ss <= nxt)
			break;

		if (cur % 12 == t2 % 12)
			res = true;
		if (nxt % 12 == t2 % 12)
			res = true;
	}

	if (res)
		puts("YES");
	else
		puts("NO");




	return 0;
}