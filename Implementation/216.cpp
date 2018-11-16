#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int inf = (int)1e9 + 7;
const ll linf = (ll)4e18 + 7;

bool one(int a, int b, int l, int r) {
    return a >= l && a <= r && b >= l && b <= r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, a, b;
    cin >> n >> a >> b;

    int res = (int)log2(n);
    int l = 1, r = n;
    while (true) {
        int tm = (l + r) / 2;
        if (one(a, b, l, tm)) {
            res--;
            r = tm;
        } else if(one(a, b, tm + 1, r)) {
            res--;
            l = tm + 1;
        } else break;
    }

    if (res == (int)log2(n)) {
        cout << "Final!";
    } else
        cout << res;
    return 0;
}