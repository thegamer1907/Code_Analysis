#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define pb push_back
#define F first
#define S second
#define ll long long
#define FILE "series"
#define ld long double
#define endl '\n'
#define pii pair <int, int>
//#define int long long

//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

typedef tree <pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

const int N = 5e5 + 5;
const int mod = 1e9 + 7;
const int rx[4] = {1, -1, 0, 0};
const int ry[4] = {0, 0, 1, -1};

ll x;

bool can(ll mid){
    ll fi = 0, se = 0;
    ll cur = x;
    while (cur > 0){
        fi += min(cur, mid);
        cur = max(cur - mid, 0ll);
        se += cur / 10;
        cur -= cur / 10;
    }
    return fi >= se;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(0));
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //   freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif // LOCAL
    cin >> x;
    ll l = 1, r = x;
    ll res = -1;
    while (l <= r){
        ll mid = (l + r) / 2;
        if (can(mid)){
            res = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << res;
    return 0;
}
