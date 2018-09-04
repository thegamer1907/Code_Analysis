#include <bits/stdc++.h>

using namespace std;

map <long long, long long> dp, c;
long long ans;

int main()
{
    long long n, k;
    cin >> n >> k;
    while (n--)
    {
        long long a;
        cin >> a;
        ans += dp[a];
        if (a%k == 0)
        {
            dp[a*k] += c[a/k];
        }
        c[a]++;
    }
    cout << ans;
    return 0;
}