#pragma comment(linker,"/STACK:128000000")
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <ctime>
#include <deque>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <algorithm>
#include <tuple>
#include <iostream>
#include <random>
#include <list>
#include <iomanip>
#include <assert.h>
#include <random>
#include <complex>

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<double, double> ptd;

const int inf = (int)1e9 + 1000;
const ll infLL = 10000000000000001LL;
const int mod = (int)1e9 + 7;
const double eps = 1e-7;
const double pi = 3.141592653589793;
const int maxlen = (int)1e5 + 10;
const int base = (int)1e9;

const int dd = (int)100 + 10;

#define ACCEPTED return 0;
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define X first
#define Y second
#define optimize cin.sync_with_stdio(false);cout.sync_with_stdio(false);cin.tie(0);

vi g[maxlen];
int dp[maxlen];
int A[maxlen];
bool L[maxlen];

void dfs(int u, int p = -1)
{
    if (g[u].size() == 1 && p != -1)
        L[u] = true;

    if (A[u])
        dp[u] = 1;

    if (p > -1 && A[p] && A[u])
        dp[u] += dp[p];

    for (int to : g[u]) {
        if (to == p)
            continue;

        dfs(to, u);
    }
}

void dfs1(int u, int p = -1)
{
    for (int to : g[u]) {
        if (to == p)
            continue;

        dp[to] = max(dp[to], dp[u]);
        dfs1(to, u);
    }
}

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif

    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1);
    dfs1(1);

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (L[i] && dp[i] <= m)
            ans++;
    }

    printf("%d", ans);

    return 0;
}