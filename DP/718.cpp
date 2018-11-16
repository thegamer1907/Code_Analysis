#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.length(),m;
    cin >> m;
    int l,r;
    vector <int> a(n);
    a[0] = 0;
    for(int i = 1; i < n; i++) {
        a[i] = a[i-1] + (s[i] == s[i-1]);
    }
    while(m--) {
        cin >> l >> r;
        cout << a[--r] - a[--l] << "\n";
    }
}
