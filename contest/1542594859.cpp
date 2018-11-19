#include <bits/stdc++.h>

using namespace std;

const int MaxN = 1e5 + 15;
const int INF = 1e9;
const int MOD = 1e9 + 7;

string s[202];

int main()
{
    string S;
    cin >> S;
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> s[i];
        for(int j = 1; j < s[i].size(); ++j)
            if(S[0] == s[i][j - 1] && S[1] == s[i][j])
            {
                cout << "YES\n";
                return 0;
            }
    }
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        {
            if(s[i].back() == S[0] && s[j][0] == S[1])
            {
                cout << "YES\n";
                return 0;
            }
        }
    cout << "NO\n";
    return 0;
}
