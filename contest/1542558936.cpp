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
bool ok(int i, int j, int n, int m) { return 0 <= i&&i < n && 0 <= j&&j < m; }
const double EPS = 1e-9;
const double PI = acos(-1);
bool LE(double a, double b) { return b - a > -EPS; }
bool BE(double a, double b) { return a - b > -EPS; }
bool EQ(double a, double b) { return fabs(a - b) < EPS; }
bool LESS(double a, double b) { return b - a > EPS; }
bool BIGG(double a, double b) { return a - b > EPS; }
template <int N, typename T> class lug { public: T at[N]; };

class Seq
{
public:
	const static int lg = 18;
	const static int maxlen = 1<<lg;
	int len;
	string str;
	string pre, suf;
	int maxans;
};

int Calc(string &s)
{
	int res = 0;
	for (int len = 1; len <= Seq::lg; len++)
	{
		vector<int> ms(1 << len);
		int left = ms.size();

		int mask = 0;
		for (int i = 0; i < len - 1; i++)
		{
			mask = mask * 2;
			mask += s[i] - '0';
		}
	
		for (int i = len - 1; i < s.size(); i++)
		{
			mask = mask * 2;
			mask += s[i] - '0';

			if (ms[mask] == 0) left--;
			ms[mask] = 1;

			if(mask & (1 << (len - 1)))
				mask -= (1 << (len - 1));
		}

		if (left == 0)
			res = len;
		else
			break;
	}

	return res;
}

int main()
{
	int n = next<int>();
	vector<Seq> vs(n);

	for (int i = 0; i < n; i++)
	{
		vs[i].str = next<string>();
		vs[i].len = vs[i].str.size();
		vs[i].maxans = Calc(vs[i].str);
	}

	int q = next<int>(); int start = clock();
	while(q--)
	{
		int a = next<int>() - 1;
		int b = next<int>() - 1;

		if (vs[a].len + vs[b].len <= Seq::maxlen)
		{
			Seq s;
			s.str = vs[a].str + vs[b].str;
			s.len = vs[a].len + vs[b].len;
			s.maxans = Calc(s.str);
			vs.push_back(s);
		}
		else
		{
			string pre;
			if (vs[a].str == "")
				pre = vs[a].pre;
			else
			{
				pre = vs[a].str;

				if (vs[b].str == "")
					pre = (pre + vs[b].pre);
				else
					pre = (pre + vs[b].str);

				pre = pre.substr(0, Seq::maxlen);
			}

			string suf;
			if (vs[b].str == "")
				suf = vs[b].suf;
			else
			{
				suf = vs[b].str;

				if (vs[a].str == "")
					suf = vs[a].suf + suf;
				else
					suf = vs[a].str + suf;

				suf = suf.substr(suf.size()-Seq::maxlen, Seq::maxlen);
			}

			Seq s;
			s.pre = pre;
			s.suf = suf;
			s.len = min(1<<25, vs[a].len + vs[b].len);

			string mid;
			if (vs[a].str == "")
				mid = vs[a].suf;
			else
				mid = vs[a].str;
			if (vs[b].str == "")
				mid += vs[b].pre;
			else
				mid += vs[b].str;

			s.maxans = max(Calc(mid), max(vs[a].maxans, vs[b].maxans));
			vs.push_back(s);
		}

		cout << vs.back().maxans << endl;
	}


	return 0;
}