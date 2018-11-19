#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool f = false;
    string s, w[128];
    cin >> s;
    cin >> n;
    int l = s.size();
    for (int i = 0; i < n; i++) cin >> w[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            string ns = w[i] + w[j];
            if ((s == ns.substr(0, 2)) || (s == ns.substr(1, 2)) || (s == ns.substr(2, 2))) f = true;
        }
    }
    if (f) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
