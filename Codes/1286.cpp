#include <iostream>
#include <string>

using namespace std;

const int sz = 1e3 + 100;

string s[sz];

int main()
{
    int n, m, i, j;
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    if (n > m)
    {
        cout << "YES";
        return 0;
    }
    if (m > n)
    {
        cout << "NO";
        return 0;
    }
    int ans = n;
    string cur;
    for (i = 0; i < n; i++)
        cin >> s[i];
    for (i = 0; i < m; i++)
    {
        bool t = false;
        cin >> cur;
        for (j = 0; j < m; j++)
            if (cur == s[j])
            {
                t = true;
                break;
            }
        if (!t)
            ans++;
    }
    if (ans&1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
