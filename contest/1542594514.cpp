#include <bits/stdc++.h>
using namespace std;
using LL = int64_t;
const LL INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    char a = s[0], b = s[1];
    int n;
    cin >> n;
    int fs = 0, ft = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s[0] == a && s[1] == b) ft = 1, fs = 1;
        if (s[0] == b) ft = 1;
        if (s[1] == a) fs = 1;
    }
    if (fs && ft) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
