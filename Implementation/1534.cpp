#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    long long res = 0;
    long long cur = 1;
    for (long long i = 0; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cur++;
        } else {
            res = max(cur, res);
            cur = 1;
        }
    }
    res = max(cur, res);
    if (res >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
