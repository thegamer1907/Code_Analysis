#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, j = 0;
    string a;
    set<string> s1;
    set<string> s2;
    set<string>::iterator it;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s1.insert(a);
    }
    for (int i = 0; i < m; i++) {
        cin >> a;
        it = s1.find(a);
        if (it != s1.end()) {
            s1.erase(it);
            j++;
        } else {
            s2.insert(a);
        }
    }
    if (j & 1) {
        if(s2.size() > s1.size()) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    } else {
        if(s2.size() >= s1.size()) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}