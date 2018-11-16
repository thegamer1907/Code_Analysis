#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    ll x = 0;
    for (char c : s) {
        if (c == '7' || c == '4') {
            x++;
        }
    }
    if (x == 4 || x == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
