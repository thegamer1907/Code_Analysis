/** F**k THIS PROBLEM !!!!!!!! **/
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

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

using namespace std;

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

#define ios                 ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define Time()              cout << clock() * 1000 / CLOCKS_PER_SEC << "ms" << '\n'
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

int n , m;
set<string> st1, st2 , st;
int t , u;

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

int main () {
    ios;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string tmp;   cin >> tmp;
        st1.insert(tmp);
    }
    for (int i = 0; i < m; i++) {
        string tmp;   cin >> tmp;
        st2.insert(tmp);
        if (st1.count(tmp)) {
            st.insert(tmp);
        	st1.erase(tmp);
        	st2.erase(tmp);
		}
    }
    t = st1.size();
	u = st2.size();
	if (st.size() & 1)
		t++;
	return cout << (t > u ? "YES\n" : "NO\n"), false;
}