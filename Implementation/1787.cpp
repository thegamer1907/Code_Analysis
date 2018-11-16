#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char now = '~';
    int coun = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == now) {
            coun++;
            if (coun == 7) {
                cout << "YES";
                return 0;
            }
        } else {
            now = s[i];
            coun = 1;
        }
    }
    cout << "NO";
}
