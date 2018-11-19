#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long l;

int main() {
    int n;
    string s;
    cin >> s;
    vector <string> t;
    string c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        t.push_back(c);
    }
    for (int i = 0; i < n; ++i) {
        if (t[i] == s) {
            cout << "YES";
            return 0;
        }
    }
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        if (t[i][1] == s[0]) {
            flag = true;
            break;
        }
    }
    if (flag){
        flag = false;
        for (int i = 0; i < n; ++i) {
            if (t[i][0] == s[1]) {
                flag = true;
                break;
            }
        }
    }
    if (!flag)
    cout << "NO";
    else
        cout << "YES";
    return 0;
}
