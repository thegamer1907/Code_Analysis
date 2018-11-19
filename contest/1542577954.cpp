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
    string need;
    cin >> need;
    int n;
    cin >> n;
    vector<string> can(n);
    for (int i = 0; i < n; ++i) {
        cin >> can[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            string c = can[i] + can[j];
            if (c.find(need) != string::npos) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}