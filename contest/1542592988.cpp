#include <bits/stdc++.h>

using namespace std;

const int N = 101;

int n;
string s, a[N];

int main()
{
    cin >> s;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
    {
        string b = a[i] + a[j];
        for (int k = 0; k < 3; ++k)
            if (b[k] == s[0] && b[k + 1] == s[1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
