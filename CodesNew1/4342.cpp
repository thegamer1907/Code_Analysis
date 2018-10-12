#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define lll long long

using namespace std;

const int N = 5e5 + 229;
const int M = 1e9 + 7;

string t[N];

int sz[N];

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
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }
    sz[n - 1] = t[n - 1].size();
    for (int i = n - 2; i >= 0; --i) {
        int f = int(t[i].size());
        bool z = 0;
        for (int j = 0; j < min(int(t[i].size()), sz[i + 1]); ++j) {
            if (t[i][j] < t[i + 1][j]) {
                break;
            }
            if (t[i][j] > t[i + 1][j]) {
                f = j;
                break;
            }
            if (j + 1 == min(int(t[i].size()), sz[i + 1])) {
                z = 1;
            }
        }
        sz[i] = f;
        if (int(t[i].size()) > sz[i + 1] && z) {
            sz[i] = sz[i + 1];
        }
        if (sz[i + 1] == 1) {
            sz[i] = 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < sz[i]; ++j)
            cout << t[i][j];
        cout << '\n';
    }
    return 0;
}
