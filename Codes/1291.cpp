#include <bits/stdc++.h>
using namespace std;
int n, m;

int main() {
    cin >> n >> m;
    set <string> sn;
    int coincide = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        sn.insert(s);
    }
    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        if (sn.find(s) != sn.end()) coincide++;
    }
    int i = 0;
    while (n && m) {
        i++;
        if (coincide) {
            coincide--;
            n--;
            m--;
        } else {
            if (i & 1) n--;
            else m--;
        }
        if (n == 0 || m == 0) {
            if (n == 0 && m == 0) {
                if (i & 1) cout << "YES" << endl;
                else cout << "NO" << endl;
            } else {
                if (n == 0) cout << "NO" << endl;
                else cout << "YES" << endl;
            }
        }
    }
}
