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

    sort(all(a));

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int m; cin >> m;
        cout << (upper_bound(all(a), m) - a.begin()) << '\n';
    }
    return 0;
}
