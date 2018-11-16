#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define llong long long
#define dlong double long
#define F first
#define S second
#define endl '\n'
#define pb push_back

// CODE CODE CODE CODE CODE CODE CODE

const int N = 1e5 + 36;
const int MOD = 1e9 + 7;

//tree < int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> st;

llong win[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, a, b;
    cin >> n >> a >> b;
    if (a>b) swap(a, b);
    for (int i(0); i<300; i++) {
        win[i]=i;
    }
    for (int j(0); j<=200; j++) {
        int nw=1;
        for (int i(1); i<=n/(1<<j); i+=2) {
            if (win[i]==a && win[i+1]==b) {
                //cout << n << ' ' << (1<<j) << endl;
                if (n/(1<<j)==2) {
                    cout << "Final!" << endl;
                } else {
                    cout << j+1 << endl;
                }
                return 0;
            }
            if (win[i]==a || win[i]==b) {
                win[nw++]=win[i];
                continue;
            }
            if (win[i+1]==a || win[i+1]==b) {
                win[nw++]=win[i+1];
                continue;
            }
            win[nw++]=win[i];
        }
    }
    return 0;
}
