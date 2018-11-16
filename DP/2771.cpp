#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    vector<int> v;
    for(int mask = 0; mask < (1 << 8); mask++)
    {
        int x = 0;
        for(int j = 0; j < 7; j++)
        {
            x *= 10;
            x += (mask >> j) & 1;
        }
        if(x) v.push_back(x);
    }
    sort(v.begin(), v.end());
    v.resize(unique(v.begin(), v.end()) - v.begin());
    int n;
    cin >> n;
    vector<int> dp(n + 1), last(n + 1);
    for(int i = 1; i <= n; i++)
    {
        int ans = INT_MAX, o;
        for(int k : v)
        {
            if(i - k >= 0)
            {
                if(dp[i - k] < ans)
                {
                    ans = dp[i - k];
                    o = k;
                }
            }
        }
        dp[i] = ans + 1;
        last[i] = o;
    }
    cout << dp[n] << endl;
    int x = n;
    while(x)
    {
        cout << last[x] << " ";
        x -= last[x];
    }
}
