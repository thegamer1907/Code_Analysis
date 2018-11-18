#include<bits/stdc++.h>
using namespace std;

int n, ok1, ok2;
string p, t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> p >> n;
    for (int i=0; i<n; i++) {
        cin >> t;
        if (t[0]==p[0] && t[1]==p[1]) ok1 = ok2 = 1;
        if (t[1]==p[0]) ok1 = 1;
        if (t[0]==p[1]) ok2 = 1;
    }

    if (ok1 && ok2) cout << "YES";
    else cout << "NO";
    return 0;
}
