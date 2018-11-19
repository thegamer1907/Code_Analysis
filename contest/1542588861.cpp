#include <bits/stdc++.h>

using namespace std;

int main() {
    string pw;
    int n;
    cin >> pw >> n;
    vector<string> s;
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        s.push_back(w);
    }

    bool ok = false;
    for (auto s1: s) {
        for (auto s2: s) {
            auto cur = s1+s2;
            if (cur.find(pw) != string::npos) {
                ok = true;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
}
