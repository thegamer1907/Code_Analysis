#include <iostream>
#include <string>

using namespace std;

int words[100];

int main()
{
    string t;
    int n;
    bool first = false, second = false;
    cin >> t >> n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        if (s == t)
        {
            cout << "YES";
            return 0;
        }
        if (s[0] == t[1]) first = true;
        if (s[1] == t[0]) second = true;
    }
    if (first and second) cout << "YES";
    else cout << "NO";
}
