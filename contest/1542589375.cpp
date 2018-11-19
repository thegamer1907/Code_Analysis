#include <bits/stdc++.h>

using namespace std;

int first[30], second[30];
string s;
int n, f;
char b1, b2;

int main()
{
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b1 >> b2;
        if (b1 == s[0] && b2 == s[1])
        {
            f = 1;
            break;
        }
        first[b1 - 'a'] = 1;
        second[b2 - 'a'] = 1;
    }
    if ((first[s[1] - 'a'] == 1 && second[s[0] - 'a'] == 1) || f == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
