#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int inf = (int)1e9 + 7;
const ll linf = (ll)1e18 + 7;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    int mn = inf, mn_pos = -1, mx = 0, mx_pos = -1;

    int a;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a < mn) {
            mn = a;
            mn_pos = i;
        }

        if (a > mx) {
            mx = a;
            mx_pos = i;
        }

        if (a == mn) {
            mn_pos = i;
        }
    }

    if (mx_pos > mn_pos) {
        mx_pos--;
    }
    
    cout << mx_pos + n - 1 - mn_pos;

    return 0;
}