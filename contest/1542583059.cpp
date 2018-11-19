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
    int n, k;
    cin >> n >> k;
    vector<set<int>> nonZero(k);
    for (int i = 0; i < n; ++i) {
        int knows;
        for (int j = 0; j < k; ++j) {
            cin >> knows;
            if (!knows) {
                nonZero[j].insert(i);
            }
        }
    }

    if (k == 1) {
        cout << (nonZero[0].size() ? "YES\n" : "NO\n");
        return 0;
    }

    int fl = 0;
    for (int mask = 0; mask < (1 << k) && !fl; ++mask) {
        vector<int> first, second;
        for (int i = 0; i < k; ++i) {
            if (mask & (1 << i)) {
                first.push_back(i);
            }
            else {
                second.push_back(i);
            }
        }
        if (intersect(first, nonZero) && intersect(second, nonZero)) {
            fl = 1;
        }
    }

    cout << (fl ? "YES\n" : "NO\n");
    return 0;
}