#include <bits/stdc++.h>
using namespace std;

int main() {
#ifdef __LOCAL__
    freopen("in", "r", stdin);
#endif
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    sort(a.begin(), a.end());
    //for (int aa : a) cout << aa << ' '; cout << '\n';
    int st = (int)a.size() / 2, en = (int)a.size() - 1;
    int tot = 0;
    for (int i = 0; i < (int)a.size() / 2; i++) {
        //cout << st << ' ' << en << ' ' << '\n';
        int lo = st, hi = en + 1, mi;
        while (lo < hi) {
            mi = (lo + hi) / 2;
            if (a[mi] < 2 * a[i]) lo = mi + 1;
            else hi = mi;
        }
        if (lo >= (int)a.size()) break;
        else {
            tot++;
            st = lo + 1;
        }
    }
    cout << n - tot << '\n';
    return 0;
}
