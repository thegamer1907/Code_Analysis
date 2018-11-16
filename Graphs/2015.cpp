#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/STACK:167772160000")
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
typedef std::pair<ll, ll> pll;
typedef std::pair<double, double> pdd;
template <typename T> using min_heap = std::priority_queue<T, std::vector<T>, std::greater<T>>;
template <typename T> using max_heap = std::priority_queue<T, std::vector<T>, std::less<T>>;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define TESTS(t) int NUMBER_OF_TESTS; cin >> NUMBER_OF_TESTS; for(int t = 1; t <= NUMBER_OF_TESTS; t++)
#define FOR(i, start, end) for(int i = (start); i < (end); i++)
#define ROF(i, start, end) for(int i = (start); i >= (end); i--)
#define all(x) (x).begin(), (x).end()
//#define endl "\n"
#define PI (asin(1)*2)
#define oo ((1LL<<31)-1)
#define OO ((1LL<<63)-1)
#define eps 1e-12
#define in(a, b)   ((b).find(a) != (b).end())
#define mp(a, b)   make_pair((a), (b))
#define sgn(a)     ((a) > eps ? 1 : ((a) < -eps ? -1 : 0))
#define cl1(x)     ((x)&((x)-1)) // clear lowest 1 bit
#define cl0(x)     ((x)|((x)+1)) // clear lowest 0 bit
#define ct1(x)     ((x)&((x)+1)) // clear all trailing 1 bits
#define pb push_back
#define MOD 1000000007
#define MAX_N 100000
using namespace std;

bool hasCat[MAX_N];
vector<int> adjList[MAX_N];

int dfs(int u, int m, int streak, int from = -1) {
    streak = hasCat[u] ? streak+1 : 0;
    if (streak > m) return 0;
    if (adjList[u].size() == 1 && u != 0) return 1;
    int ans = 0;
    for(auto x : adjList[u]) {
        if (x != from) {
            ans += dfs(x, m, streak, u);
        }
    }
    return ans;
}

int main()
{
    FAST_IO
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    FOR(i, 0, n) cin >> hasCat[i];
    FOR(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        u--;v--;
        adjList[u].pb(v);
        adjList[v].pb(u);
    }
    cout << dfs(0, m, 0);
    return 0;
}