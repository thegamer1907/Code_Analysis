#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxN = 111;

string a[maxN];

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    bool ok = false;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            string t = a[i] + a[j];
            if (t[0] == s[0] && t[1] == s[1]) ok = true;
            if (t[1] == s[0] && t[2] == s[1]) ok = true;
            if (t[2] == s[0] && t[3] == s[1]) ok = true;
        }
    }
    if (ok) cout << "YES" << endl; else cout << "NO" << endl;
    return 0;
}
