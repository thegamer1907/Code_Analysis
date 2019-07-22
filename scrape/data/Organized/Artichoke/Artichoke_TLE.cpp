#pragma comment(linker, "/STACK:1000000000")
#include <vector>
#include <map>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <set>
#include <sstream>
#include <functional>
#include <iterator>
#include <random>
#include <list>
#include <queue>
#include <cstdlib>
#include <string>
#include <memory.h>
#include <cstdint>
#include <unordered_map>
#include <unordered_set>
#include <cassert>
#include <bitset>
#include <fstream>
#include <deque>
#include <cmath>
#include <numeric>
#include <stack>
#include <stdarg.h>
#include <cstdio>
using namespace std;
#pragma region custom templates
#define fi(n) for (int i = 0; i < int (n); i++)
#define fj(n) for (int j = 0; j < int (n); j++)
#define fk(n) for (int k = 0; k < int (n); k++)
#define f1(n) for (auto&i1 : n)
#define f2(n) for (auto&i2 : n)
#define f3(n) for (auto&i3 : n)
#define all(n) n.begin(), n.end()
#define break(_x)    {_x;break;}
#define continue(_x) {_x;continue;}
#define _sort(_x)    sort(_x.begin(), _x.end())
#define r_sort(_x)   sort(_x.rbegin(), _x.rend())
#define MAX_VAL_OF(_x) std::numeric_limits<decltype(_x)>::max()
#define eb(_x)	emplace_back(_x)

#define rep(_i,_b,_e) for(auto _i = _b; _i < _e; ++_i)
#define fa(_i,_v) for(auto&_i:_v) 

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

namespace {
	ll gcd(ll a, ll b) { while (a) { b %= a; swap(a, b); } return b; }

	const ll MOD7 = 1000000007LL, MOD9 = 1000000009LL;
	enum class START_OPTION { NOTHING = 0, FILE_INPUT = 1, FILE_OUTPUT = (1 << 1), FILE_OUTHERE = (1 << 2) };
	inline START_OPTION operator| (START_OPTION a, START_OPTION b)
	{
		return static_cast<START_OPTION>(static_cast<int>(a) | static_cast<int>(b));
	}
	inline int operator& (START_OPTION a, START_OPTION b)
	{
		return static_cast<int>(a) & static_cast<int>(b);
	}
	template<typename T1, typename T2> istream& operator>> (istream&i, pair<T1, T2>&p)
	{
		return i >> p.first >> p.second;
	}
	template<typename T1, typename T2> ostream& operator<< (ostream&i, pair<T1, T2>&p)
	{
		return i << p.first << " " << p.second;
	}
	template<typename T>istream& operator>> (istream&i, vector<T>&v)
	{
		for (auto&e : v)i >> e;
		return i;
	}
	template<typename T>ostream& operator<< (ostream&i, vector<T>&v)
	{
		for (size_t ii = 0; ii < v.size(); ii++) {
			i << v[ii];
			if (ii + 1 != v.size())
				i << ' ';
		}
		return i/* << endl*/;
	}
	void _start(START_OPTION opt = START_OPTION::NOTHING, string fileIn = "input.txt", string fileOut = "output.txt")
	{
#ifdef LOCAL_FREOPEN
		if (opt & START_OPTION::FILE_INPUT)  freopen(fileIn.c_str(), "r", stdin);
		if (opt & START_OPTION::FILE_OUTPUT) freopen(fileOut.c_str(), "w", stdout);
#endif
		if ((opt & START_OPTION::FILE_OUTHERE) && (opt & START_OPTION::FILE_INPUT))  freopen(fileIn.c_str(), "r", stdin);
		if ((opt & START_OPTION::FILE_OUTHERE) && (opt & START_OPTION::FILE_OUTPUT)) freopen(fileOut.c_str(), "w", stdout);
		cin.sync_with_stdio(false);
		cout.sync_with_stdio(false);
		cin.tie(0);
	}
	template<typename T = string> void _end(T out = "", int returnValue = 0)
	{
		cin.sync_with_stdio(0);
		cout.sync_with_stdio(0);
		cout << out;
#ifdef LOCAL_FREOPEN
		cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC * 1000 << " ms." << endl;
#endif
		exit(returnValue);
	}
}
#pragma endregion custom templates



int main()
{
	_start(START_OPTION::FILE_INPUT
		/*| START_OPTION::FILE_OUTPUT
		| START_OPTION::FILE_OUTHERE,
		"input.txt",
		"output.txt"*/);
	ll n, m, k; cin >> n >> m >> k;
	vector<ll> v(m); cin >> v;
	ll cur = 0;
	ll next_page = k + 1;
	ll removed = 0;
	ll ans = 0;
	while (cur < m) {
		if (v[cur] >= next_page) {
			if (removed == 0LL)
				next_page = (v[cur] / k) * k + k + 1;
			else {
				next_page += removed;
				ans++;
			}
			continue;
		}
		removed++;
		cur++;
	}
	if (removed)ans++;
	_end(ans);
}