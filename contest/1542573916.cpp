#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <math.h>
#include <cmath>
#include <queue>
#include <iomanip>
#include <bitset>
#include <numeric>
#include <stack>
#include <deque>
#include <memory.h>
#include <string>
#include <unordered_map>

#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define vI vector<int>
#define vvI vector<vector<int>>
#define vLL vector<ll>
#define vS vector<string>
#define fori(i, n) for(int (i)=0; (i)<n; (i)++)
#define forn(it,from,to) for(int (it)=from; (it)<to; (it)++)
#define forI(tmp) for(auto(it)=(tmp).begin();(it)!=(tmp).end();(it)++)
#define PI 3.14159265356
#define LD long double
#define sc(a) scanf("%d", &(a))
#define scc(a) scanf("%I64d", &(a))
#pragma comment (linker, "/STACK:5000000000")
typedef long long ll;
const ull mod = 1000000007;
ll Inf = (ll)2e9;
ll LINF = (ll)1e13;

using namespace std;



int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // DEBUG
	int h, m, s, t0, t1;
	cin >> h >> m >> s >> t0 >> t1;
	h *= 5;
	h %= 60;
	t0 %= 60;
	t1 %= 60;
	t0 *= 5;
	t1 *= 5;
	int cnt = 0;
	for (int i = min(t0, t1); i < max(t0, t1); i++)
	{
		if (i == h)
			cnt++;
		if (i == m)
			cnt++;
		if (i == s)
			cnt++;
	}
	cnt %= 3;
	puts(cnt ? "NO" : "YES");
	return 0;
}