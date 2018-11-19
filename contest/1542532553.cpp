#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e5 + 7;

string t[maxn];
int n;

int32_t main()
{
    string s;
    cin >> s;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> t[i];
        if (t[i] == s)
        {
            cout << "YES\n";
            return 0;
        }
    }
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            if (s[0] == t[i][1] && s[1] == t[j][0])
            {
                cout << "YES\n";
                return 0;
            }
    cout << "NO\n";
    return 0;
}