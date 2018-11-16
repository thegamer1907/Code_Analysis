#include <bits/stdc++.h>
using namespace std;

const int Max = 1e5 + 100;
int a[Max];
int dp[Max];

int main()
{
    int n, ans = 1;
    cin >> n;

    cin >> a[0];
    dp[0] = 1;

    for (int i=1  ;  i<n  ;  i++)
    {
        cin >> a[i];
        if (a[i] > a[i-1])
            dp[i] = dp[i-1] + 1;
        else
            dp[i] = 1;
        ans = max(ans,dp[i]);
    }

    cout << ans << endl;
}
