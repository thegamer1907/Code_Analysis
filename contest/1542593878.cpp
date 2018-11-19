#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define uint unsigned int

void yes() {
    cout << "YES\n";
    exit(0);
}

int main() {
    string pas;
    cin >> pas;

    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        if (pas == s[i]) {
            yes();
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (s[i][1] == pas[0] && s[j][0] == pas[1]) {
                yes();
            }
        }
    }

    cout << "NO\n";

    return 0;
}
