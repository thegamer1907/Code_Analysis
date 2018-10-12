#include <bits/stdc++.h>

#define NM 102

using namespace std;

int n, m, mi = -1, mx = -1, s;

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if(a < mi || mi == -1)
            mi = a;
        if(a > mx || mx == -1)
            mx = a;
        s += a;
    }
    cout << max(mx, (s + m + n - 1) / n) << " " << mx + m << "\n";
    return 0;
}
