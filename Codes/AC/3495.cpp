#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;
using namespace std;

//template <typename T>
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef vector<int> vi;
typedef long long ll;

#define pb push_back
#define inf 0x3f3f3f3f
#define all(v) (v).begin() , (v).end()
#define ones(n) __builtin_popcount(n)
#define watch(x) cout << (#x) << " is " << (x) << endl

int di[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dj[] = {1, -1, 0, 0, -1, 1, 1, -1};

ll n;
bool good(ll k) {
    ll first = 0 , second = 0;
    ll  cand = n;
    for (int i = 1 ; cand > 0 ;i++) {
        if(i&1) {
            first += min(cand , k);
            cand -= min(cand , k);
        } else {
            second += cand / 10;
            cand -= cand / 10;
        }
    }

    return first * 2 >= n;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif
    scanf("%lld" , &n);

    ll l = 1 , r = 1e18 , ans = -1;
    while(l <= r) {
        ll mid = (r + l) / 2 ;
        if(good(mid)) {
            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }

    printf("%lld" , ans);
}