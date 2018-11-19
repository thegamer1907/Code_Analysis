#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    string s, a[105];
    int n;
    cin >> s;
    cin >> n;
    bool mark = false;
    bool mark1 = false, mark2 = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == s) {
            mark = true;
        }
        if (a[i][0] == s[1]) {
            mark1 = true;
        }
        if (a[i][1] == s[0]) {
            mark2 = true;
        }
    }
    if (mark1 && mark2) {
        mark = true;
    }
    if (mark) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}