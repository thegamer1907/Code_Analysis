#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main ()
{
    lli n = 0, m = 0;
    cin >> n >> m;
    vector <vector <lli>> data (n, vector <lli> (m));
    for (lli i = 0; i < n; i++)
        for (lli j = 0; j < m; j++)
            cin >> data[i][j];
    vector <vector <lli>> dp (n, vector <lli> (m));
    for (lli j = 0; j < m; j++)
        dp[0][j] = 1;
    for (lli i = 1; i < n; i++)
        for (lli j = 0; j < m; j++)
            dp[i][j] = (data[i][j] >= data[i - 1][j]? dp[i - 1][j] + 1 : 1);
    vector <lli> result (n);
    for (lli i = 0; i < n; i++)
    {
        result[i] = dp[i][0];
        for (lli j = 1; j < m; j++)
            result[i] = max (result[i], dp[i][j]);
    }
    lli k = 0;
    cin >> k;
    for (lli i = 0; i < k; i++)
    {
        lli l = 0, r = 0;
        cin >> l >> r;
        l--, r--;
        if (result[r] >= (r - l + 1))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
