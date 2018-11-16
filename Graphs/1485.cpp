#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("unroll-loops")
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <limits>
#include <ctime>
#include <cassert>
#include <map>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <fstream>
#include <sstream>
#include <stack>
#include <queue>
#include <numeric>
#include <iterator>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <iomanip>

using namespace std;

#define endl '\n'
#define forn(i,n) for(int i = 0; i < (n); i++)
#define sz(c) ((int)c.size())
#define pb push_back
#define pf push_front

typedef double ld;
typedef long long ll;
typedef pair <int, int> pii;

const int inf = 1e9 + 123;
const ll ll_inf = 1e18 + 123;
const double eps = 1e-9;
const ld PI = 3.141592653589793238462643;


vector<vector<int>> g;
vector<int> used;

void dfs(int v) {
    used[v] = 1;
    for (auto to : g[v]) {
        if (!used[to]) {
            dfs(to);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, t, k;
    cin >> n >> k;
    g.resize(n + 1);
    used.assign(n + 1, 0);
    for (int i = 1; i < n; ++i) {
        cin >> t;
        g[i].push_back(t + i);
    }
    dfs(1);
    cout << (used[k] ? "YES" : "NO");
    return 0;
}
