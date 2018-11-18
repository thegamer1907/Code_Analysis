#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    string t;
    cin >> n;
    char a = s[0], b = s[1];
    bool c1 = false, c2 = false, c3 = false;
    for (int j = 0; j < n; j++) {
        cin >> t;
        if (s == t)
            c1 = true;
        if (t[1] == a) {
            c2 = true;
        }
        if (t[0] == b)
            c3 = true;
    }
    if (c1 || c2 && c3)
        cout << "YES";
    else
        cout << "NO";
}
