#include <bits/stdc++.h>

using namespace std;

bool solve()
{
    string str;
    int n;
    cin >> str;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == str)
            return true;
    }
    int k = 0;
    for (auto s : v)
        if (s[1] == str[0])
            k = 1;
    for (auto s : v)
    {
        if (s[0] == str[1])
        {
            k++;
            break;
        }
    }
    return k == 2;
}

int main()
{
    if (solve())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

