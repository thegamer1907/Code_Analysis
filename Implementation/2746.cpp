#include <bits/stdc++.h>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    reverse(S.begin(), S.end());
    bool res = S == T;
    cout << (res ? "YES" : "NO") << endl;
    return 0;
}