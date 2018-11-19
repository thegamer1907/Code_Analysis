#include <bits/stdc++.h>

using namespace std;

string s, k[110];

int n, w1, w2, z2, z1;

int main() {
    cin >> s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> k[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            string f = k[i] + k[j];
//            cout << f << "\n";
            for (int l = 0; l < 3; ++l) {
                if (f[l] == s[0] && f[l + 1] == s[1]) {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}
