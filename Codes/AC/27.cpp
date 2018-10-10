#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <climits>
#include <set>
#include <bitset>
#include <math.h>
#include <queue>
#include <map>
#include <sstream>
#include <functional>
#include <assert.h>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <random>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef std::pair<int, int> pii;
typedef std::pair<double, double> pdd;
template <typename T> using min_heap = std::priority_queue<T, std::vector<T>, std::greater<T>>;
template <typename T> using max_heap = std::priority_queue<T, std::vector<T>, std::less<T>>;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cout << #x << " = " << x << endl;
#define TESTS(t) int NUMBER_OF_TESTS; cin >> NUMBER_OF_TESTS; for(int t = 1; t <= NUMBER_OF_TESTS; t++)
#define FOR(i, start, end) for(int i = (start); i < (end); i++)
#define ROF(i, start, end) for(int i = (start); i >= (end); i--)
#define all(x) (x).begin(), (x).end()
#define PI (asin(1)*2)
#define OO ((1LL<<31)-1)
#define eps 1e-6
#define in(a, b)   ((b).find(a) != (b).end())
#define mp(a, b)   make_pair((a), (b))
#define sgn(a)     ((a) > eps ? 1 : ((a) < -eps ? -1 : 0))
#define cl1(x)     ((x)&((x)-1)) // clear lowest 1 bit
#define cl0(x)     ((x)|((x)+1)) // clear lowest 0 bit
#define ct1(x)     ((x)&((x)+1)) // clear all trailing 1 bits
#define pb push_back
#define MOD 1000000007
#define MAX_N 500000
using namespace std;

int main()
{
    FAST_IO
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, l;
    cin >> n >> l;
    set<int> pos;
    FOR(i, 0, n) {
        int a;
        cin >> a;
        pos.insert(a);
    }
    vector<int> v;
    for(auto i : pos) v.pb(i);
    ld d = 0;
    FOR(i, 0, v.size()-1) {
        ld dd = v[i+1]-v[i];
        dd /= 2;
        d = max(d, dd);
    }
    d = max(d, (ld)v[0]);
    d = max(d, (ld)l-v[v.size()-1]);
    cout << fixed << setprecision(12) << d << endl;
    return 0;
}