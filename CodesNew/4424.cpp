#include <bits/stdc++.h>

using namespace std;

string common(string &s1, string &s2) {
    if (s1 <= s2)
        return s1;
    int l = min(s1.length(), s2.length());
    for (int i = 0; i < l; i++)
        if (s1[i] != s2[i]) {
            return s1.substr(0, i);
        }
    return s1.substr(0, l);
}

const int MaxN = 500'000;
string s[MaxN + 5];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = n-2; i >= 0; i--) {
        s[i] = common(s[i], s[i+1]);
    }

    for (int i = 0; i < n; i++)
        cout << s[i] << endl;

    return 0;
}