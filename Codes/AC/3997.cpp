#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define lll long long

using namespace std;

const int N = 5e5 + 229;
const int M = 1e9 + 7;

map < pair < int, int >, bool > was;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    int pref[n][m], a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            pref[i][j] = 0;
            cin >> a[i][j];
            if (i) {
                pref[i][j] = pref[i - 1][j] + (a[i][j] >= a[i - 1][j]);
            }
        }
    }
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        if (was.count({l, r})) {
            if (was[{l, r}]) {
                cout << "Yes";
            } else {
                cout << "No";
            }
            cout << '\n';
            continue;
        }
        bool f = 0;
        for (int j = 0; j < m; ++j) {
            if (pref[r][j] - pref[l][j] == r - l) {
                f = 1;
                break;
            }
        }
        was[ {l, r}] = f;
        if (f) {
            cout << "Yes";
        } else {
            cout << "No";
        }
        cout << '\n';
    }
    return 0;
}
