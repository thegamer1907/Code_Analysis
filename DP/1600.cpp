#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    string s;
    cin >> s;
    int n = s.length();
    set <int> ab;
    set <int> ba;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            ab.insert(i);            
        }
        if (s[i] == 'B' && s[i + 1] =='A') {
            ba.insert(i);
        }
    }
    for (auto it = ab.begin(); it != ab.end(); it++) {
        for (auto it2 = ba.rbegin(); it2 != ba.rend(); it2++) {
            if (abs(*it - *it2) >= 2) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}