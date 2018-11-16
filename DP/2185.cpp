#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int a[100001];
    int temp;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int dp[100001], present[100001];
    memset(present, 0, sizeof(present));
    memset(dp,0,sizeof(dp));
    for (int i = n; i >= 1; i--)
    {
        int plus = 0;
        if (present[a[i]] == 0)
        {
            plus = 1;
        }

        dp[i] = dp[i + 1] + plus;
        present[a[i]] = 1;
    }

    while (m--)
    {
        cin >> temp;
        cout << dp[temp] << endl;
    }
    return 0;
}