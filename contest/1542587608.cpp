#include <bits/stdc++.h>

using namespace std;

int main() {
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    bool right = false;
    bool left = false;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        if (pass == tmp) {
            right = true;
            left = true;
        }
        if (pass[0] == tmp[1]) {
            right = true;
        }
        if (pass[1] == tmp[0]) {
            left = true;
        }
    }
    if (left && right) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
