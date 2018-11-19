#include <bits/stdc++.h>

using namespace std;

string s, a, phu;
int n, i;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s >> n;
    a.resize (2 * n);
    for (i = 0; i < 2 * n; i += 2)
    {
        cin >> phu;
        a[i] = phu[0];
        a[i + 1] = phu[1];
        if (phu == s)
        {
            cout << "YES";
            break;
        }
    }
    if (i < 2 * n);
    else
    {
        for (i = 0; i < n; i++)
            if (a[i * 2 + 1] == s[0])
                break;
        if (i < n)
        {
            for (i = 0; i < n; i++)
                if (a[i * 2] == s[1])
                {
                    cout << "YES";
                    break;
                }
            if (i == n)
                cout << "NO";
        }
        else
            cout << "NO";
    }
}
