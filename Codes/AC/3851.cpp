/** The Quieter you become the more you hear! **/
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <tuple>
#include <math.h>
#include <bitset>
#include <vector>
#include <cstdio>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <utility>
#include <sstream>
#include <complex>
#include <iostream>
#include <assert.h>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

using namespace std;

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

#define ios                 ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define Time()              cout << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define pob                 pop_back
#define pb                  push_back
#define F                   first
#define S                   second
#define sz(x)               x.size()
#define clM                 constexpr ll MOD
#define clMAXN              constexpr ll MAXN
#define clD                 constexpr ll DELTA
#define smax(x, y)          (x) = max((x), (y))
#define smin(x, y)          (x) = min((x), (y))
#define Sort(a, n)          sort((a), (a) + (n))
#define GSort(a, n)         sort((a), (a) + (n), greater<int>())
#define debug               cout << "!"
#define debug1(i)           cout << (i) << '\n'
#define debug2(i, j)        cout << (i) << ' ' << (j) << '\n'
#define debug3(i, j, k)     cout << (i) << ' ' << (j) << ' ' << (k) << '\n'
#define For(i, m, n)        for (int i = (m); i < (n); i++)
#define RFor(i, m, n)       for (int i = (m); i >= (n); i--)
#define For2(i, m, n)       for ((i) = (m); (i) < (n); (i)++)
#define For1(i, m, n)       for (int i = (m); i < (n); i += (m))

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

typedef long long                   ll;
typedef long double                 ld;
typedef vector<int>                 veci;
typedef long long int               lli;
typedef pair<int, int>              pii;
typedef vector<long long>           vecl;
typedef pair<string, string>        pss;
typedef unsigned long long int      ull;
typedef pair<long long, long long>  pll;

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

bool check(ll mid);

clD = 1e14;
ll b , s , c;
string d;
ll pb , ps, pc;
ll a[3];
ll r;

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

int main() {
    cin >> d >> b >> s >> c >> pb >> ps >> pc >> r;
    for (int i = 0; i < d.length(); i++) {
        if (d[i] == 'B')
            a[0]++;
        if (d[i] == 'S')
            a[1]++;
        if (d[i] == 'C')
            a[2]++;
    }
    ll lo = 0, hi = DELTA;
    while (lo + 1 < hi) {
        ll mid = (lo + hi) >> 1;
        if (check(mid)) {
            lo = mid;
        } else {
            hi = mid;
        }
    } 
    return cout << lo << '\n', false;
}

bool check(ll mid) {
	ull x = 0;
	if (b < mid * a[0]) 
		x += (mid * a[0] - b) * pb;
	if (s < mid * a[1]) 
		x += (mid * a[1] - s) * ps;
	if (c < mid * a[2])
		x += (mid * a[2] - c) * pc;
	return x <= r;
}