#include <bits/stdc++.h>

using namespace std;

string d[1000];

int main() {
    int n;
    string s;
    cin >> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (d[i] == s || d[j] == s) {
                cout << "YES";
                return 0;
            }
            if (d[i][1] == s[0] && d[j][0] == s[1]) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
