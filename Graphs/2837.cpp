// #define _GLIBCXX_DEBUG

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mp make_pair
#define pb push_back
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define ld long double
#define pas(v) cout << #v << ' ' << v << endl
#define all(v) v.begin(), v.end()
#define x first
#define y second
using namespace std;
using namespace __gnu_pbds;

#define fun(a, ...) function<a(__VA_ARGS__)>

typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> sset;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    vector<vector<int>> g(n);
    vector<vector<ll>> c(n);
    for (int i = 1; i < n; i++) {
        int p; ll cc;
        cin >> p >> cc;
        p--;
        c[p].pb(cc);
        g[p].pb(i);
    }

    vector<ll> pref(n, 0);
    vector<int> bad(n, 0);
    vector<int> sz(n, 1);

    fun(void, int, ll) dfs = [&](int v, ll minpref) {
        minpref = min(minpref, pref[v]);
        if (pref[v] - minpref > a[v]) bad[v] = 1;

        for (int i = 0; i < g[v].size(); i++) {
            int u = g[v][i];
            pref[u] = pref[v] + c[v][i];
            dfs(u, minpref);
            sz[v] += sz[u];
        }
    };

    dfs(0, 0);
    int ans = 0;
    fun(void, int) dfs1 = [&](int v) {
        if (bad[v]) {
            ans += sz[v];
            return;
        }
        for (int u : g[v]) {
            dfs1(u);
        }
    };

    dfs1(0);

    cout << ans << endl;

    return 0;
}
