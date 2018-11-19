#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
const ld PI = acos(-1.);
const ll INF = 1000 * 1000 * 1000  + 1;
const ll MOD = 1000 * 1000 * 1000 + 7;

bool intersect(vector<int>& idxs, vector<set<int>>& s) {
    if (idxs.size() == 0) {
        return 0;
    }
    int sz = 0;
    for (auto& el : s[idxs[0]]) {
        int cnt = 1;
        for (int j = 1; j < idxs.size(); ++j) {
            if (s[idxs[j]].find(el) != s[idxs[j]].end()) {
                ++cnt;
            }
        }
        if (cnt == idxs.size()) {
            ++sz;
        }
        if (sz) {
            return true;
        }
    }
    return false;
}

int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    double ah, am, as, at1, at2;
    ah = h + m / 60. + s / 3600.;
    ah *= 30;

    am = m + s / 60.;
    am *= 6;

    as = s * 6;

    at1 = t1 * 30;
    at2 = t2 * 30;

    if (at1 > at2) {
        swap(at1, at2);
    }

    int cnt = 0;
    if (ah < at1 || ah > at2) {
        ++cnt;
    }
    if (am < at1 || am > at2) {
        ++cnt;
    }
    if (as < at1 || as > at2) {
        ++cnt;
    }

    if (cnt == 0 || cnt == 3) {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}