#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    string a[n+1];
    for (int i=1; i<=n; i++)
        cin >> a[i];

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i!=j && a[i][1]==s[0] && a[j][0]==s[1])
            {
                cout << "YES";
                return 0;
            }
            else if (i!=j && a[j][1]==s[0] && a[i][0]==s[1])
            {
                cout << "YES";
                return 0;
            }
            else if (a[i]==s || (a[i][0]==s[1] && a[i][1]==s[0]))
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
