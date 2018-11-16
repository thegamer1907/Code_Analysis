#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    set<int> c;
    int cnt = 0;
    int r[n] = {0};
    for (int i = n - 1; i >= 0; i--)
    {
        if (c.find(a[i]) == c.end())
        {
            cnt++;
            c.insert(a[i]);
        }
        r[i] = cnt;
    }

    int f;
    for (int i = 0; i < m; i++)
    {
        cin >> f;
        cout << r[f-1] << "\n";
    }
    return 0;
}
