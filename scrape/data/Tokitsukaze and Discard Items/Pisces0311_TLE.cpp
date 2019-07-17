#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxm = 1e5 + 5;
const int inf = 0x3f3f3f3f;

ll n, m, k;
ll spe[maxm];

int main() {
#ifdef DEBUG
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    cin >> n >> m >> k;
    for (int i = 1; i <= m; ++i) {
        cin >> spe[i];
    }
    ll page = k, op = 0;
    int i = 1;
    while (i <= m) {
        ll cnt = 0;
        while (i <= m && spe[i] <= page) {
            ++i;
            ++cnt;
        }
        if (cnt) {
            page += cnt;
            ++op;
        } else
            page += k;
    }
    cout << op << endl;

    return 0;
}