#include <bits/stdc++.h>
using namespace std;

bool l[256], f[256];

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 1; i<= n; i++)
    {
        string p;
        cin >> p;
        if (p == s)
        {
            cout << "YES";
            return 0;
        }
        l[p[1]] = true;
        f[p[0]] = true;
    }
    if (l[s[0]] and f[s[1]]) cout << "YES";
    else cout << "NO";
}