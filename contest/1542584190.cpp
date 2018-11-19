#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, a;
    long long n;
    cin >> s;
    cin >> n;
    bool ans = 0, cst = 0, ctr = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        if(a == s) {
            ctr = 1;
        }
        if(a[0] == s[1]) ans = 1;
        if(a[1] == s[0]) cst = 1;
    }
    if(ctr || (ans && cst)) {
        cout << "YES";
    } 
    else cout << "NO";
    return 0;
}