#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")

using namespace std;

int main() {
    string s;
    cin >> s;
    int n; cin >> n;
    bool fl2, fl1;
    fl1 = fl2 = false;
    while (n--) {
        string tpl; cin >> tpl;
        if (tpl == s) {
            cout << "YES";
            return 0;
        }
        if (tpl[0] == s[1]) {
            fl2 = true;
        }
        if (tpl[1] == s[0]) {
            fl1 = true;
        }
        if (fl1 && fl2) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}