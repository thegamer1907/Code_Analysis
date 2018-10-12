#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define n s.size()

const int maxN = 1e6 + 10;
int dp[maxN];

int main()
{
    int k;
    string s;
    cin >> k >> s;

    for (int i=0  ;  i<s.size()  ;  i++)
    {
        dp[i+1] = dp[i];
        dp[i+1] += (s[i] == '1');
    }

    ll ans = 0;

    for (int l=0  ;  l<n  ;  l++)
    {
        int up  = upper_bound(dp+l+1, dp+n+1, dp[l]+k) -dp;
        int low = lower_bound(dp+l+1, dp+n+1, dp[l]+k) -dp;

        ans += up - low;
    }

    cout << ans;
}
