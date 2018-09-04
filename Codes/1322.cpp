#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> a,b,c;
    string s;
    int n,m; cin >> n >> m;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> s;
        a.push_back(s);
    }

    for (int i = 0 ; i < m ; i++)
    {
        cin >> s;
        if (find(a.begin(),a.end(),s) != a.end()) c.push_back(s);
        b.push_back(s);
    }

    if (c.size() % 2 == 0 && n <= m) cout << "NO" << endl;
    else if (c.size() % 2 == 0 && n > m) cout << "YES" << endl;
    else if (c.size() % 2 == 1 && n < m) cout << "NO" << endl;
    else if (c.size() % 2 == 1 && n >= m) cout << "YES" << endl;


    return 0;
}
