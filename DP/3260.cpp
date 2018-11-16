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

const int N = 1e7 + 5;
const ll mod = 1e9 + 7;
const ll mod1 = 1e9 + 9;
const int rx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
const int ry[8] = {0, 0, 1, -1, 1, -1, 1, -1};
const ld pi = acos(-1.0);
const ll kek = 227;
const int B = (int)sqrt(N);

mt19937 gen(chrono::system_clock::now().time_since_epoch().count());


bool mark[N];
int cnt[N];
int pref[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(0));
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
//       freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
#endif // LOCAL
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    for (int i = 2; i < N; i++) {
        if (!mark[i]) {
            int cur = 0;
            for (int j = i; j < N; j += i){
               mark[j] = 1;
               cur += cnt[j];
            }
            pref[i] = cur;
        }
    }
    for (int i = 1; i < N; i++) pref[i] += pref[i - 1];
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        r = min(r, N - 1);
        l = min(l, N - 1);
        cout << pref[r] - pref[l - 1] << endl;
    }
    return 0;
}
