#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

const int N = 102;


int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string s, str;
    cin >> s;
    int n;
    cin >> n;
    bool f1, f2, f3;
    f1 = f2 = f3 = false;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (str == s) {
            f3 = true;
        }
        else if (str[1] == s[0]) {
            f1 = true;
        }
        else if (str[0] == s[1]) {
            f2 = true;
        }
        reverse(str.begin(), str.end());
        if (str == s) {
            f3 = true;
        }
    }
    if (f3 || f1&&f2) {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    
    return 0;
}