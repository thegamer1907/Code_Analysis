#include <bits/stdc++.h>

using namespace std;

main () {
    string p;
    cin >> p;
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        if (s[i] == p) return cout << "YES", 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (string(s[i] + s[j]).substr(1, 2) == p) return cout << "YES", 0;
        }
    }

    cout << "NO";

}
