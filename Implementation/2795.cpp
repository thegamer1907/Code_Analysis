#include <bits/stdc++.h>

using namespace std;

const int INF = 1'000'000'007;

int main() {
    ios_base::sync_with_stdio(false);
    string s, a, b;
    cin >> s;
    a = s, b = s;
    int A = 0, B = 0;
    for (int i = 0; i < s.size(); i++) {
        if (islower(a[i])) a[i] = toupper(a[i]), A++;
        if (isupper(b[i])) b[i] = tolower(b[i]), B++;
    }
    if (A < B) cout << a;
    else cout << b;
}