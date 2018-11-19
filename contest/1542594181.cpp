#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s, S[120];
    cin >> s >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> S[i];
        if (S[i] == s)
        {
            cout << "YES";
            return (0);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (S[i][1] == s[0] && S[j][0] == s[1])
            {
                cout << "YES";
                return (0);
            }
        }
    }
    cout << "NO";
    return (0);
}

