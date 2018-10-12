#include<bits/stdc++.h>

using namespace std;

int n, m;
string s;
map<string, int> check;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        check[s]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> s;
        check[s]++;
    }
    if (n < m)
        cout << "NO" << '\n';
    else if (n > m)
        cout << "YES" << '\n';
    else
    {
        if (check.size() % 2 != 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
