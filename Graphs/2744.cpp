#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef long double ld;

#define P pair
typedef P<int, int> Pii;
typedef P<ll, ll> Pll;
#define mp make_pair
#define fi first
#define se second

#define V vector
typedef V<int> Vi;
typedef V<Pii> VPii;
typedef V<ll> Vll;
typedef V<Pll> VPll;

#define pb push_back
#define all(v) (v).begin(), (v).end()

#define forn(i, n) for (int (i) = 0;(i) < (n); (i)++)

#define re return

typedef tree<Pii, null_type, less<Pii>, rb_tree_tag, tree_order_statistics_node_update> pbds_set;

void solve_A() {
    ios_base::sync_with_stdio(false);
    ifstream cin("area.in");
    ofstream cout("area.out");
    cout.precision(20);

    int n;
    cin >> n;

    Vll x(n), y(n);
    forn(i, n)cin >> x[i] >> y[i];

    double s = 0.0;
    forn(i, n)s += (x[(i + 1) % n] - x[i]) * (y[(i + 1) % n] + y[i]) / 2.0;

    cout << abs(s) << endl;
}

void solve_B() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, q, m;
    cin >> n >> q >> m;

    Vi a(n);
    forn(i, n)cin >> a[i];

    V<Vi> qq(q, Vi(3));
    forn(i, q)forn(j, 3)cin >> qq[i][j];

    Vi b(m);
    forn(i, m)cin >> b[i];

    for (int j = q - 1; j >= 0; j--) {
        int t = qq[j][0], l = qq[j][1], r = qq[j][2];
        forn(i, m)if (l <= b[i] && b[i] <= r)
                if (t == 1)
                    b[i] = b[i] == l ? r : (b[i] - 1);
                else
                    b[i] = l + r - b[i];
    }

    forn(i, m)cout << a[b[i] - 1] << " ";
    cout << endl;
}

V<Vi> graph;
V<bool> used;
Vi c;

int dfs(int v) {
    used[v] = true;
    int mn = c[v];
    for (int u : graph[v])
        if (!used[u])
            mn = min(mn, dfs(u));
    return mn;
}

void solve_C() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    graph.resize(n);
    c.resize(n);

    forn(i, n)cin >> c[i];

    forn(i, m) {
        int v, u;
        cin >> v >> u;
        v--;
        u--;
        graph[v].pb(u);
        graph[u].pb(v);
    }

    ll ans = 0;
    used.resize(n);

    forn(v, n)if (!used[v])
            ans += dfs(v);

    cout << ans << endl;
}

void solve_D() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    // ifstream cin(".in");
    // ofstream cout(".out");

    // solve_A();
    // solve_B();
    solve_C();
    solve_D();

    re 0;
}