#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/STACK:16777216")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using matrix = vector<vector<long long>>;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define all(x) (x).begin(), (x).end()
//#define int ll

void FAST_IO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
    #ifdef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // _offline
}

const int MAXN = 2e5 + 100;
int arr[MAXN];

signed main() {
    FAST_IO();
    int n;
    cin >> n;
    for (int i = 0; i < MAXN; ++i) {
        cin >> arr[i];
    }
    ll ans = 0;
    ll sum1 = 0, sum2 = 0;
    int l = -1, r = n;
    while (true) {
        if (l + 1 == r) {
            break;
        }
        sum1 += arr[++l];
        if (sum1 == sum2) {
            ans = max(ans, sum1);
            if (r - 1 == l) {
                break;
            }
            sum2 += arr[--r];
        }
        while (r - 1 > l && sum2 < sum1) {
            sum2 += arr[--r];
        }
        if (sum1 == sum2) {
            ans = max(ans, sum1);
            if (r - 1 == l) {
                break;
            }
            sum2 += arr[--r];
        }
    }
    cout << ans;
}
