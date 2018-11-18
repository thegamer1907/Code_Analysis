#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s[1002], orig;
    cin >> orig >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if ((s[i][1] == orig[0] && s[j][0] == orig[1]) || orig == s[j])
                return cout << "YES", 0;
    cout << "NO";
    return 0;
}
