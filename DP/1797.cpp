#include <bits/stdc++.h>
using namespace std;

#define D(x) cout << #x << ": " << x << endl;

int ab1 = 0, ba1 = 0, ab2 = 0, ba2 = 0;
string s;

inline void done() {
    cout << "YES\n";
    exit(0);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    for (unsigned i = 0; i < s.size() - 1; ++i) {
        if (!ab1 && s[i] == 'A' && s[i + 1] == 'B') ++ab1, i += 2;
        if (ab1 && !ba1 && s[i] == 'B' && s[i + 1] == 'A') ++ba1, done();
    }

    for (unsigned i = 0; i < s.size() - 1; ++i) {
        if (!ba2 && s[i] == 'B' && s[i + 1] == 'A') ++ba2, i += 2;
        if (ba2 && !ab2 && s[i] == 'A' && s[i + 1] == 'B') ++ab2, done();
    }
    cout << "NO\n";
    return 0;    
}