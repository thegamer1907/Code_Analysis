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
using namespace std;
#pragma region custom templates
#define break(x) {x;break;}
#define continue(x) {x;continue;}
#define _sort(x) sort(x.begin(), x.end())
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MOD = 1000000007;
template<typename T>istream& operator>>(istream&i, vector<T>&v)
{
	for (auto&e : v)i >> e;
	return i;
}
template<typename T>ostream& operator<<(ostream&i, vector<T>&v)
{
	for (auto&e : v)i << e << " ";
	return i;
}
template<typename T1, typename T2>istream& operator>>(istream&i, vector<pair<T1, T2>>&v)
{
	for (auto&e : v)i >> e.first >> e.second;
	return i;
}
template<typename T1, typename T2>ostream& operator<<(ostream&i, vector<pair<T1, T2>>&v)
{
	for (auto&e : v)i << e.first << " " << e.second << endl;
	return i;
}
bool isVowel(char x)
{
	return x == 'a' || x == 'e' || x == 'o' || x == 'u' || x == 'i';
}
void _start()
{
#ifdef LOCAL_FREOPEN
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	cin.tie(0);
}
template<typename T>void _end(T out)
{
	cout << out;
#ifdef LOCAL_FREOPEN
	cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC * 1000 << " ms." << endl;
#endif
	exit(0);
}
#pragma endregion custom templates

int main()
{
	_start();
	ll n; cin >> n;
	ll l = 0, r = n;
	while (l < r - 1)
	{
		ll mid = (l + r) / 2;
		ll tn = n;
		ll got = 0;
		while (tn)
		{
			got += min(tn, mid);
			tn -= min(tn, mid);
			tn -= tn / 10;
		}
		if (got >= (n + 1) / 2)
			r = mid;
		else l = mid;
	}
	_end(r);
}