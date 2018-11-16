#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    bool dan = false;
    for (int i = 0; i < int(s.size()); i++) {
        if (cnt0 >= 7 || cnt1 >= 7) {
            cout << "YES";
            return 0;
        }
        if (s[i] == '0') {
            cnt0++;
            cnt1 = 0;
        } else {
            cnt1++;
            cnt0 = 0;
        }
    }
    if (cnt0 >= 7 || cnt1 >= 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
