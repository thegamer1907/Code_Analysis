#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (ll i = 0; i < t; i++) {
        string old = s;
        for (ll i = 1;  i < n; i++) {
            if (old[i - 1] == 'B' && old[i] == 'G') {
                s[i - 1] = 'G';
                s[i] = 'B';
            }
        }
    }
    cout << s << endl;
}
