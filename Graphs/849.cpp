#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, a[30001], r = 1;
    cin >> n >> t;
    for (int i = 1; i < n; i++)
        cin >> a[i];
    while (r < t)
        r += a[r];
    if (r == t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
