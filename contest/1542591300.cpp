// Example program
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

string s[101];

int a[26][26];

int main()
{
    string ss;
    int n;
    cin >> ss >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        a[int(s[i][0]) - int('a')][int(s[i][1]) - int('a')] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[int(s[i][1]) - int('a')][int(s[j][0]) - int('a')] = 1;
        }
    }
    if (a[int(ss[0]) - int('a')][int(ss[1]) - int('a')] == 1)
        cout << "YES";
    else
        cout << "NO";
}
