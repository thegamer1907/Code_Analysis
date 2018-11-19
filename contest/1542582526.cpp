#include <bits/stdc++.h>

using namespace std;

main () {
    int n, k;
    cin >> n >> k;

    set<vector<int>> a;
    for (int i = 0; i < n; ++i) {
        vector<int> v;
        for (int j = 0; j < k; ++j) {
            int x;
            cin >> x;
            if (x == 0) x = -1;
            v.push_back(x);
        }
        a.insert(v);
    }

    vector<vector<int>> b = vector<vector<int>>(a.begin(), a.end());

    int sz = b.size();
    for (int i = 1; i < 1 << sz; ++i) {
        vector<int> sm(k, 0);
        for (int j = 0; j < sz; ++j) {
            if (i & (1 << j)) {
                for (int l = 0; l < k; ++l) {
                    sm[l] += b[j][l];
                }
            }
        }
        bool ok = true;
        for (int j = 0; j < k; ++j) {
            if (sm[j] > 0) ok = false;
        }
        if (ok) return cout << "YES", 0;
    }
    cout << "NO";

}
