#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define pb push_back
#define F first
#define S second
#define ll long long
#define FILE "skyline"
#define ld long double
#define endl '\n'
//#define int long long
#define pii pair <int, int>

//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

typedef tree <pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

const int N = 2e5 + 5;
const ll mod = 1e9 + 7;
const ll mod1 = 1e9 + 9;
const int rx[4] = {1, -1, 0, 0};
const int ry[4] = {0, 0, 1, -1};
const ld pi = acos(-1.0);
const ll kek = 227;
const int B = 350;

int a[N];
map <ll, int> pref, suff;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(0));
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    // freopen(FILE".in", "r", stdin);
    //  freopen(FILE".out", "w", stdout);
#endif // LOCAL
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        suff[a[i]]++;
    }
    ll res = 0;
    for (int i = 0; i < n; i++){
         suff[a[i]]--;
         if (a[i] % k == 0){
            int x = a[i] / k;
            ll y = 1ll * a[i] * k;
            if (pref.count(x) && suff.count(y)){
                res += 1ll * pref[x] * suff[y];
            }
         }
         pref[a[i]]++;
    }
    cout << res << endl;
    return 0;
}
