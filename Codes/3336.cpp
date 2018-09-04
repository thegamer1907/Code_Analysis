#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define int long long
#define pb push_back
#define x first
#define elif  else if
#define ld long double
#define y second
#define mk(a,b) make_pair(a,b)
#define rr return 0
#define sqr(a) ((a)*(a))
#define all(a) a.begin(),a.end()
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
typedef tree<int,
        null_type,
        less<int>,
        rb_tree_tag,
        tree_order_statistics_node_update>
    set_t;
/// find_by_order()
/// order_of_key()
main()
{
    ios::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n], miz = 1e10;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        miz = min(miz, a[i]);
    }
    int k = (miz / n) * n;
    for (int i = 0; i < n; i++)
        a[i] -= k;
//    for (int i = 0; i < n; i++)
//        cout << a[i] << ' ';
//    cout << '\n';
    miz = 1e10;
    while (1 == 1) {
        for (int i = 0; i < n; i++) {
            if (a[i] - i <= 0) {
                cout << i + 1;
                rr;
            }
            a[i] -= n;
        }
    }
}
