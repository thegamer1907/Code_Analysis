#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <iostream>
#include <functional>
using namespace std;

#define pb push_back
#define mp make_pair
#define szz(a) (int)a.size()
#define endl '\n'
#define all(a) a.begin(),a.end()

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <db, db> pdd;

const size_t MAX = 100005;
const db PI = acos(-1.0);
const int MOD = 1000000007;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int Move[][2] = { {1, 0},{-1, 0},{0, 1},{0, -1},{1, 1},{1, -1},{-1, 1},{-1, -1} };
ll gcd(const ll& a, const ll& b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(const ll& a, const ll& b) { return a / gcd(a, b) * b; }
ll Pow(ll a, int t) { a %= MOD; ll base = 1; while (t > 0) { if (t & 1) base = base * a % MOD; a = a * a % MOD; t >>= 1;} return base; }

int v[MAX];

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];

    priority_queue<pii> Q;
    for (int i = 1; i <= n; i++) {
        v[i] = int(ceil(max(db(v[i] - i + 1), 0.0) / n));
        Q.emplace(-v[i], -i);
    }
    cout << -Q.top().second << endl;
}

