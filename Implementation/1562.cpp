#include <bits/stdc++.h>
using namespace std;
string s;
int cur, ans;
bool f;
int main () {
    cin >> s;
    f = !(s[0]-'0');
    for (auto it : s) {
        if (it == !f + '0') {
            cur = 1;
            f = !f;
        }
        else {
            cur++;
        }
        ans = max(ans, cur);
    }
    ans = max(ans, cur);
    if (ans >= 7) cout << "YES";
    else cout << "NO";
}

