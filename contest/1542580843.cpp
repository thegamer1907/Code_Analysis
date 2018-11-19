#include <bits/stdc++.h>
using namespace std;

char s[100], p[110][30];
int v[100];

int main () {
    cin >> s;
    int n;
    cin >> n;
    memset (v, 0, sizeof v);
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[i][1] == s[0] && p[j][0] == s[1]) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (p[i][0] == s[0] && p[i][1] == s[1]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}