#include <bits/stdc++.h>
using namespace std;
using LL = int64_t;
const LL INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    vector<int> a(13);
    if (s % 5 == 0) {
        if (s == 0) a[12]++;
        else a[s / 5]++;
    } else a[s / 5 + 1]++;
    if (s > 0) {
        a[m / 5 + 1]++;
    } else {
        if (m % 5 == 0) {
            if (m == 0) a[12]++;
            else a[m / 5]++;
        } else a[m / 5 + 1]++;
    }
    if (s > 0 || m > 0) a[h % 12 + 1]++;
    else a[h]++;
    vector<int> b[3];
    int now = 0;
    for (int i = 1; i <= 12; i++) {
        while (a[i]--) now = (now + 1) % 3;
        b[now].push_back(i);
    }
    for (auto& i : b) {
        if (find(i.begin(), i.end(), t1) != i.end() && find(i.begin(), i.end(), t2) != i.end()) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
