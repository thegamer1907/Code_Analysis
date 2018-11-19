#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int n;
    cin >> n;
    string str[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> str[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            string new_str = str[i] + str[j];
            if (new_str.find(s) != -1) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}