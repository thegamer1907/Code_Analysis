#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 7;

string t[N];

int main()
{
    ios::sync_with_stdio(false);
    
    string s;
    cin >> s;
    int n;
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
