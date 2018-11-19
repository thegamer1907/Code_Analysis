#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define FILE ""

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen(FILE".in", "r", stdin);
    //freopen(FILE".out", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector <int> a(300, 0), b(300, 0);
    for (int i = 0; i < n; ++i)
    {
        string c;
        cin >> c;
        if (c == s)
        {
            cout << "YES";
            return 0;
        }
        a[c[0]]++;
        b[c[1]]++;
    }
    if ((a[s[1]] > 0 && b[s[0]]))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
