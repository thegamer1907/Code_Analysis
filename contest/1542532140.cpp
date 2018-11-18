#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int main() {
    bool a = false, b = false;
    cin >> s;
    cin >> n;
    while (n--) {
        string t; cin >> t;
        if (t[0] == s[1]) a = true;
        if (t[1] == s[0]) b = true;
        if (t == s) {
            cout << "YES" << endl;
            return 0;
        }
    }
    if (a & b) cout << "YES" << endl;
    else cout << "NO" << endl;
}
